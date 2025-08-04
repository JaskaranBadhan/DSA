class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();//size of fruits array
        vector<int> prefixSum(n);// fruits prefixSum 
        vector<int> positions(n);//sorted already
        for(int i =0;i<n;i++){
            positions[i]= fruits[i][0];//find position 
            prefixSum[i] = fruits[i][1] + (i>0 ? prefixSum[i-1]: 0); //chaeckinclude           because if i=0 so that is done  and find prefixSum
        }        
        int maxFruits = 0;
        for(int d=0;d<=k/2;d++){
            //case-1 moved d steps to the left
            int remain = k-2*d;//remaing from startPosition 
            int i = startPos-d ;
            int j = startPos +remain;
            int left =  lower_bound(begin(positions),end(positions),i)-begin(positions);
            int right = upper_bound(begin(positions),end(positions),j)-begin(positions)-1;
            if(left<=right){
                int total = prefixSum[right]-(left>0 ? prefixSum[left-1]: 0);
                maxFruits = max(maxFruits,total);
            }
            //case-2 moved d to the right hand side
            //remain = k -2d;
            j = startPos+d;
            i = startPos - remain;
             left =  lower_bound(begin(positions),end(positions),i)-begin(positions);
             right = upper_bound(begin(positions),end(positions),j)-begin(positions)-1;
             if(left<=right){
                int total = prefixSum[right]-(left>0 ? prefixSum[left-1]: 0);
                maxFruits = max(maxFruits,total);
            }
        }
        return maxFruits;
    }
};
