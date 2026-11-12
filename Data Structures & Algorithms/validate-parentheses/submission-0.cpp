class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1)return false;
        stack<char>st;
        for(char ch:s){
            if(ch=='(' || ch=='[' || ch=='{'){
                st.push(ch);
            }
            else{
                if(st.empty())return false;
                char t=st.top();
                if((ch==')' &&t=='(')|| (ch==']' &&t=='[')||(ch=='}' &&t=='{')){
                    st.pop();
                }
                else{
                    return false;
                }
            }

        }
        if(st.size()!=0)return false;
        return true;
    }
};