class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        unordered_map<char, int>table;
        
        for(int i=0;i<S.length();i++){
            if(table.count(S[i])==0){
                table[S[i]]=1;
            }
            else{
                table[S[i]]++;
            }
        }
        for(int i=0;i<J.length();i++){
            if(table.count(J[i])>0 && table[J[i]]>0){
                count=count+table[J[i]];
                
            }
        }
        return count;
    }
};
