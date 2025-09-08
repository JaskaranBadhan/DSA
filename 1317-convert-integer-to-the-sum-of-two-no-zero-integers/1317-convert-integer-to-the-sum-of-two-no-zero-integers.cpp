class Solution {
public:
    bool check(int num){
        while(num){
            if(num%10==0){//if num%10 will help to get digit last
                return false;
            }
            num/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        //Approach 1 (Brute Force)
        for(int a=1; a<=n-1;a++){//a for iteration 
            int b = n-a;//b will be n-a
            if(check(a) && check(b)){//check function will return that no digit is 0
                return {a,b};//return digit 
            }
        }
        return{};//return empty vector if not possible
    }
};