class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0){//if n==0 not divisile becuase no divisible by 0 is undefined
            return false;
        }
        while(n%4==0){//if n%4 ==0 at end is  1 then divisible else not 
            n= n/4;
        }
        if(n==1){
            return true;
        }
        else{
            return false;
        }
    }
};