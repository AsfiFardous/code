class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> table1;
        unordered_map<char,char> table2;
        
        for(int i=0;i<t.length();i++){
            if(table1.count(s[i])==0 && table2.count(t[i])==0){
                table1[s[i]]=t[i];
                table2[t[i]]=s[i];
                
            }
            else if(table1.count(s[i])>0 && table2.count(t[i])>0){
                if(table1[s[i]]!=t[i] || table2[t[i]]!=s[i]){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};
