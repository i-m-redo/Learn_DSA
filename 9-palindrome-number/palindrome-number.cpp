class Solution {
public:
    bool isPalindrome(int x) {
        long num=x,r;
        if(num<0) return false;
        while(x){
            r=r*10+x%10;
            x=x/10;
        }
        if(r==num) return true;
        return false;
    }
};