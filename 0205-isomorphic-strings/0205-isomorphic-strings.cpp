class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false ;//for string not equal
        } 
        //Map to store character mapping form string s to string  t
       unordered_map<char,char>charMapping;
       //Map to track if a character in t is already mapped
       unordered_map<char,bool>alreadyMapped;
       //Loop through each character of both strings
        for (int i=0;i<s.length();i++){
            char original = s[i];// Character from string s
            char replacement = t[i];// Corresponding Character from string t
            // If the current character in s has not been mapped yet
            if(charMapping.find(original)==charMapping.end()){
                //Check if the character in t is already usef in some other mapping
               if(alreadyMapped[replacement]){
                    return false;//Duplicate mapping found
               }
               //Create a new mapping from s[i]->t[i]
               charMapping[original]=replacement;
               //Mark the character in t as already mapped
               alreadyMapped[replacement]=true;
            }else{
                //If already mapped , check if the mapping is consistent 
                if(charMapping[original]!=replacement){
                    return false;//Inconsistent mapping found
                }
            }
        } 
        //String is ismorphic if all test are passed 
        
         
        return true;
    }
};