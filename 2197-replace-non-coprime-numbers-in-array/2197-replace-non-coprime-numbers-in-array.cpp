class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> result;// or you can use a stack 
        //Processing left to right 
        //we touch a number  twice - push into result and pop from result 
        //O(n * log(x))
        //S.C : O(1)
        for(int num : nums){
            while(!result.empty()){
                int prev = result.back();
                int curr = num;
                int GCD = gcd(prev, curr);//log(min(a,b))
                if(GCD ==1){
                    break;
                }
                result.pop_back();
                int LCM = prev/GCD *curr;
                num = LCM;//merged number

            }
            result.push_back(num);//merged result put back to result
        }
        return result;
    }
};