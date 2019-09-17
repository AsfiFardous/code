class Solution {
public:
    int countSegments(string s) {
        int count=0;
        int i=0;
        while(i<s.size() && s[i]==' ')i++;
        for(;i<s.size();i++){
            if(s[i]==' '){
                count++;
                while(i<s.size() && s[i]==' ')i++;
            }
        }
        
        if(s.size() > 0 && s.back()!=' ')
            count++;
        
        
        
      
        return count;
    }
};
