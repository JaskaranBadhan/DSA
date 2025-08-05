class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();//size calculate
        vector<bool> usedBaskets(n,false);//To track assigned baskets is used or not use bool with it
        int unplacedCount =0;//To count unplaced element
        for(int i=0;i<n;i++){//traversing fruits array
            bool placed = false;//whether fruits is placed in basket 
            for(int j=0;j<n;j++){//Traversing basket array
                if(!usedBaskets[j]&& baskets[j]>=fruits[i]){//basket size greater than fruits and usedbasket position is false or tue manes placed or not 
                    usedBaskets[j]=true;//Mark this basket as used
                    placed = true;//than placed then it will true
                    break;//Move to the next fruit
                }
            }
            if(!placed){
                unplacedCount++;//unplaced increment if it is unplaced 
            }
        }
        return unplacedCount;//return unplaced COunt 
    }
};