class Solution {
public:
    bool checkAnagram(string &s1, string &s2){
        int arr[26]= {0};//array of 26 size intialize with zero
        for(char &ch: s1){
            arr[ch -'a']++;//ch-a will give index and frequency increase
        }
        for(char &ch: s2){
            arr[ch-'a']--;//frequency 
        }
        for(int i =0;i<26;i++){
            if(arr[i]!=0)//for same frequency it will zero otherwise not zero
                return false;
        }
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        int n= words.size();//find size 
        vector<string> result;//result vector
        result.push_back(words[0]);//words[0] first one in lowest index letter
        for(int i =0;i<n;i++){
            if(!checkAnagram(words[i],result.back())){//result.back will tell words[i-1]
                result.push_back(words[i]);
            }
        }
        return result; 
    }
};