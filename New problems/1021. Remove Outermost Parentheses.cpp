class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char> st;
        string s="";
        
        for(int i=0;i<S.length();i++){
            if(!st.empty()){
                if(S[i]==')' && st.top()=='(' ){
                    st.pop();
                }
                else{
                    st.push(S[i]);
                }
            if(!st.empty()){
                s.append(string(1,S[i]));
             }
            }
            else {
                st.push(S[i]);
            } 
            
        }
            
       return s; 

    }
        
};
