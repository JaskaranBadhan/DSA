class Solution {
public:
    bool isPowerOfThree(int n) {
       if(n<=0){//n sholud be greater than 0
            return false;
       } 
       while(n%3==0){//Iteratively divide until n%3 is 0
        n/=3;
       }
       return n==1;//and after all divison it will be equal to 1
    }
};