class Solution {
public:
    int M=1e9+7;//Modulo defined acc to question
    int t[301][301];//vector size for memeroization
    int solve(int n, int num, int x){//Method to check the path 
        if(n==0){
            return 1;//1 path found 
        }
        if(n<0){
            return 0;//Invalid path
        }
        int currentPowerValue = pow(num,x);//finding the current power of n^x
        if(currentPowerValue > n){
            return 0;//value greater so can be taken 
        }
        if(t[n][num]!=-1){
            return t[n][num];
        }
        int take = solve(n-currentPowerValue,num+1,x);//Taking currentPower
        int skip = solve(n,num+1,x);//skiping currentPower
        return t[n][num]= (take+skip)% M;//all possible ways
    }
    int numberOfWays(int n, int x) {

        memset(t,-1,sizeof(t));//memsize is taken from -1
        return solve(n,1,x);
    }
};