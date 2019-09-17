#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='{'||s[i]=='[')
        {
            st.push(s[i]);
        }else if(s[i]==']'){
            if(st.top() != '['){
                //invalid ;
            }
        }else if(s[i]=='}'){

            if(st.top() != '{'){
                //invalid ;
            }
        }else if(s[i]==')'){
            if(st.top() != '('){
                //invalid ;
            }
        }
    }

    if(st.size() !=0){
        //invalid
    }
    return 0;
}
