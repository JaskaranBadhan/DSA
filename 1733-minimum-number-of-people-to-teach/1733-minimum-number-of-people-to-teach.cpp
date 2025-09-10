class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        unordered_set<int> sadusers;
        for(auto &friends: friendships){
            int u = friends[0] - 1;// //convert this to - based indexing 
            int v = friends[1] - 1;
            
            unordered_set<int> langSet(begin(languages[u]),end(languages[u]));
            bool canTalk = false;
            for(int lang : languages[v]){
                if(langSet.count(lang)){
                    canTalk = true;
                }
            }
            if(!canTalk){
                sadusers.insert(u);
                sadusers.insert(v);
            }
        }
    //Find max known languages among sad users
        vector<int> language(n+1,0);
        int mostKnownLang = 0;
        for(int user: sadusers){
            for(int lang: languages[user]){
                language[lang]++;
                mostKnownLang = max(mostKnownLang,language[lang]);
            }
        }
        return sadusers.size() - mostKnownLang;
    }
};