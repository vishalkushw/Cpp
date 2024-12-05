class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string s="",m="";
        int length;
        if (word1.size()>word2.size()){
            length=word2.size();
            max=word1;
        }
        
        else{
             length=word1.size();
            max=word2;
        }
        
        for (int i=0;i<length;i++){
            
            s=s+word1[i]+word2[i];
        }
        
        
         for (i=length;i<max.size();i++){
            
            s=s+max[i];
        }
        
     return s;   
    }
};
