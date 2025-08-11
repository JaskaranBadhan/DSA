class Solution {
public:
    int M = 1e9+7;//modular defined
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int>powers;
        vector<int> result;
        //Build powers array
        for(int i=0;i<32;i++){//32 because of 32 bit is max 
            if((n &(1<<i))!=0){//ith bit is set
                powers.push_back(1<<i);//for finding 2i //pow(2,i) and pushing the value at the pwers array
            }
        }
        for(auto &query:queries){
            int start = query[0];//for start 0 index
            int end = query[1];//and end of querey is 1 index
            long product =1;//product defined as 1
            for(int i=start; i<=end;i++){
                product= (product *powers[i])%M; //Find product
            }
            result.push_back(product);//pushing in the result array
        }
        return result;//returning rsult array

    }
}; 
