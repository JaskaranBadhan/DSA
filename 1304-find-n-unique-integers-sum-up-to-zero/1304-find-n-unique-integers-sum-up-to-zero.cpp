class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result (n);//making result array to store
        //Approach 1
        
        int start = 1;//start index
        int i=0;
        while(i+1<n){
            result[i]=start;//I arr
            result[i+1]= -start;//2 index of arr
            i+=2;//increment 
            start++;//start increment
        }
        //Approach 2 = Using two pointer 
        
        int i =0;//starting i from zero
        int j = n-1;//j at last index of the array
        int start = 1;//starting from 1
        while(i<j){
            result[i]= start;//first element
            result[j]= -start;//neg of that element
            start++;
            i++;
            j--;
        }
        //At i == j the element will out of loop and will initialie 0 automatically as vector intially assign with zero 
        return result;//return result element
    }
};
