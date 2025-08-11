class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> result(numRows);//result vector 
        for(int i=0;i<numRows;i++){
           result[i]=vector<int>(i+1,1);//row is i+1 like for i=0 the elemt will be 1column size in each row i.e in array
           for(int j=1;j<i;j++){
                result[i][j]= result[i-1][j]+result[i-1][j-1];
               //Pascal triangle sum in result 

           }
        }
        return result;
    }

};