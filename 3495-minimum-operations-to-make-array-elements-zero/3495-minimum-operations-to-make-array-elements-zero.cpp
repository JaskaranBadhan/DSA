class Solution {
public:
    long long solve(int l , int r){
        //L,R
        //1 to 3 : 1 steps
        //4 to 15 : 2 steps
        long long L = 1; // R = 4*L-1
        long long S = 1;// no. of steps  
        long  long steps = 0;
        while(L<=r){
            long long R = 4*L-1;//to calcuate R
            long long start = max(L,(long long)l);// find max (L,l)
            long long end   = min(R,(long long) r);//find min (R,r)
            if(start <=end){//for validing 
                steps += (end - start +1)*S;//
            }
            //for next range 
            S+=1;//increament
            L = L*4;//and L*4
        }
        return steps;//return total of Steps 
    }

    long long minOperations(vector<vector<int>>& queries) {
       long long result = 0;
       for(auto &query : queries){//iterating over queries 
            int l = query[0];//first element
            int r = query[1];//second element
            long long steps = solve(l,r);//to calcualte steps 
            result += (steps+1)/2;// either take ceiling of steps/2 or use this eg:- 9/2 =5
       } 
       return result;
    }
};