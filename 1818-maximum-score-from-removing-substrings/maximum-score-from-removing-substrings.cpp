//Stack and dynamic approach
class Solution {
public:
    int maxgain(string&s, string rs, int point){
        stack<char> st;
        int totalpoint=0;
        for(auto ch:s){
            if(st.empty()) st.push(ch);
            else if(ch == rs[1] && st.top()==rs[0]){
                totalpoint+=point;
                st.pop();
            }
            else st.push(ch);
        }

        //make string and reverse
        s ="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return totalpoint;
    }

    int maximumGain(string s, int x, int y) {
        string s1 = "ab", s2 = "ba";
        if(x<y) {
            swap(s1,s2);
            swap(x,y);
        }
        return maxgain(s,s1,x)+ maxgain(s,s2,y);   
    }
};