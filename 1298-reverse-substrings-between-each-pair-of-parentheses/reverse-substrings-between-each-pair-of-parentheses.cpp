class Solution {
public:
    string reverseParentheses(string s) {
        //Using stack
        stack<char> st;
        for(auto ch : s){
            if(ch=='(') st.push(ch);
            else if(ch==')')
            {
                string temp = "";
                while(st.top() != '('){
                    temp += st.top();
                    st.pop();
                }
                st.pop();
                for(auto c:temp) st.push(c);
            }
            else st.push(ch);
        }

        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};