class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int freq[1000001]={0};//creating frequency array for storing the value 
        int count =0;
        int ans = INT_MIN;
        int maxi = -1;//for maximum element 
        for (int i=0;i<arr.size();i++){
            freq[arr[i]]++;//
            maxi = max(maxi,arr[i]);//max element 
        }
        for(int i=0;i<=maxi;i++){
            if(freq[i]>0){//Frequency vecto is greater than or 
                count++;//increase count
            }
            else{
                ans = max(ans,count);//maximum sunbsequence update 
                count =0;// than for next subsequence
            }
            ans = max(ans,count);//update the subsequence
        }
        return ans;//
     }
};