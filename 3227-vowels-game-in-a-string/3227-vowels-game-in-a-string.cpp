class Solution {
public:
    bool doesAliceWin(string s) {
        //iterate through a string to chec for vowel
       for(char c : s){
        //check if vowels found
        if(c=='a'|| c=='e'|| c=='i'|| c=='o'||  c=='u'){
            //if a vowels are found , Alice wins
            return true;
            }
       }
       //If no vowels are found, Alice loses
        return false;
    }
};