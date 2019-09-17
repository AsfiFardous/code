class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
      
        if(s[s.size()-1]!=' '){
        for(int i=s.size()-1;i>=0;i--){
            if( s[i]!=' '){
               count++; 
            }
            else 
               break; 
        }
    }
        else{
            int i=s.size()-1;
            while(i>=0){
               if( s[i]==' '){
                i--; 
            }
               else {
                count++;
                   i--;
                   if(s[i]==' '){
                       break;
                   }
            }
                
        }
    }
        
        
        if(count>0){
            return count;
        }
        else 
            return 0;
    }
};
