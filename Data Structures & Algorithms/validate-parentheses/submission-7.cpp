class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s)
        {
            if(c == '[' || c == '{' || c == '(')
                    st.push(c);
            else
        {
            if(st.empty() || 
            (c == ')'  && !st.empty() && st.top() != '(') || 
            (c == ']'  && !st.empty()  && st.top() != '[') || 
            (c == '}'  && !st.empty() && st.top() != '{'))
            return false;
            st.pop();
        }
                    
            
        }
        return st.empty();
    }
};
