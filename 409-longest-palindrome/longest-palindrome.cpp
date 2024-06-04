class Solution {
public:
    int longestPalindrome(string s) {
    int n=s.size(), ans=0;
    unordered_map<char,int> freq;
    bool isodd = false;
    //get all the frequency
    for(auto c : s) freq[c]++;
    for(auto [c,fr] : freq){
        if(fr%2==0) ans+=fr;
        else{
            ans+=fr-1;
            isodd = true;
        }
    }
    return (isodd) ? ans+1 : ans;
    }
};