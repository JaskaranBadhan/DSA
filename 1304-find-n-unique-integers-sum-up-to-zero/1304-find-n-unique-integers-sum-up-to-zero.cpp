class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result (n);//making result array to stor 
        int start = 1;//start index
        int i=0;
        while(i+1<n){
            result[i]=start;//I arr
            result[i+1]= -start;//2 index of arr
            i+=2;//increment 
            start++;//start increment
        }
        return result;
    }
};