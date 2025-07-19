class Solution {
public:
    int mySqrt(int x) {
        //because x ==0  undefined in division
        if(x<2)//for 1 also beacuse it will give error finding
        return x;
        int start =0 , end = x, mid, ans;
        while(start<=end){
            mid = start + (end -  start)/2;//finding mid 
            //if(mid*mid ==x){//INT OVERFLOW
            if(mid ==x/mid){//if mid * id = target the  stor in ans 
                ans = mid;
                break;
            }
            else if (mid <x/mid){//if mid *mid <x than right side
                ans= mid ;//store mid
                start = mid +1;//right side movef
            }
            else {
                end = mid - 1;// left side if greater 
            }
        }
        return ans;
    }
};