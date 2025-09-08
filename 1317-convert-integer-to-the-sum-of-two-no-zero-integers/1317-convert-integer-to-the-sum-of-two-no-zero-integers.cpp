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
/*Approach -2(Optimal)
    vector<int>getNoZeroIntegers(int n){
        int a = n;
        int b = 0;
        int placeValue = 1;
        //a+b==n;
        while(n>1){//will reduce from a and add to b till n>1
            int take = 1;//take = 1
            if(n %10 ==1){
            ///if n = 2031 so reducing 1 will give 2000 so remove 2 instead of this case
                take = 2;
            }
            a = a - take*placeValue;//multiply take value into placeValue
            b = b + take*placeValue;
            n = (n-take)/10;//moving to next digit
            placeValue *=10;//increase placeValue like 0 10 100 etc.
        }
        return {a,b};//return digit 
    }
    //No use of check function in approach -2
*/
