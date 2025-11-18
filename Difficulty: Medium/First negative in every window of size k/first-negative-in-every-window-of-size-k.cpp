class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        vector<int> result;
        deque<int> deq;
        int i =0, j=0;
        int N = arr.size();
        while(j<N){
            //Add current element of negative 
            if(arr[j]<0){
                deq.push_back(arr[j]);
            }
            if(j-i+1 == k){
                //window check kara and negative no fill kara  
                //checking window size 
                if(!deq.empty()){
                    //If deque has negative number
                    result.push_back(deq.front());
                }
                else{
                    result.push_back(0);
                }
                //window shift karni hai abb 
                //Before sliding, remove element if it's negative
                if(arr[i]<0 && !deq.empty()){
                    deq.pop_front();
                }
                //Slide in the window
                i++;
            }
            j++;
        }
        return result;
    }
};