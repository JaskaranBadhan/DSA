class Solution {
public:
    string getSortedStr(int n){//it will sort the string of input 
        string s = to_string(n);// 10 digits // O(10)=O(D)//converted to string 
        sort(begin(s),end(s));//sorted string O(10 log 10) 0(d Logd)
        return s;//retrun s 
    }
    bool reorderedPowerOf2(int n) {
        string s = getSortedStr(n);//sorting string fuction call

        //Check all 2 powers and see if it matches with s
        //2^29 constraints is 10^9 which wil till 2^29 
        for(int power =0; power<=29;power++){
            if(s==getSortedStr(pow(2,power))){ //power nikala or doleft shift of it 1 << power
                return  true;
            }
        }
        return false;
    }
};