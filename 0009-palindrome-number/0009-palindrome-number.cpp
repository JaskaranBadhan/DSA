class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;

        int original = x;// for original
        long rev = 0;// for reverse 

        while(x != 0){

            int digit = x % 10;// for digit one 

            rev = rev * 10 + digit;// for reverse 

            x = x / 10;
        }

        return original == rev;// comaring original and reverse 
    }
};