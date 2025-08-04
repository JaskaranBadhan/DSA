class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();//size of 
        unordered_map<int , int>mp;//map storing for two basket
        int i =0;
        int j= 0;
        int count = 0;
        while(j<n){// j shoud be less than size 
            mp[fruits[j]]++;
            if(mp.size()<=2){//size two because we have two basket
                count = max(count,j-i+1);//find result 
            }
            else{//if map has more than two element 
                mp[fruits[i]]--;//reduce frequency
                if(mp[fruits[i]]==0){//if frequency of map is zero 
                    mp.erase(fruits[i]);//remove form map
                }
                i++;
            }
            j++;
        }
        return count; 
    }
};