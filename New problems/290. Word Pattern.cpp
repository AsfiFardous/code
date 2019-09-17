
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> s;
        string w;
        for(int i=0;i<str.size();i++){
            if(str[i]!=' '){
                w.push_back(str[i]);
            }else{
                if(w.size()>0){
                    s.push_back(w);
                    w = "";
                }
            }
        }
        
        if(w.size()>0){
            s.push_back(w);
        }
        if(pattern.size() != s.size()) return false;
        
        unordered_map<char, string> map1;
        unordered_map<string, char> map2;
        for(int i=0;i<pattern.size();i++){
            if(map1.count(pattern[i]) > 0  && map2.count(s[i])>0){
                if(map1[pattern[i]]!=s[i] || map2 [s[i]]!=pattern[i]){
                   return false;
                }
            }else if(map1.count(pattern[i]) == 0  && map2.count(s[i])==0){
                map1[pattern[i]]=s[i];
                map2[s[i]]=pattern[i];
            }else{
                return false;
            }
        }
        return true;
    }
};
