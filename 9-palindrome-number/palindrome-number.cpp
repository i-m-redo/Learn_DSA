class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        int new_num = 0;
        //Edge case
        if(num<0) return false;
        if(num==0) return true;

        while(x){
            if(new_num < INT_MIN/10 || new_num > INT_MAX/10)
            return false;
            new_num = new_num*10 + (x%10);
            x = x/10;
        }
        if(num == new_num) return true;
        else 
        return false;
    }
};