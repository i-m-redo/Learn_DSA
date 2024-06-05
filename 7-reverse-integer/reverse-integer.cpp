class Solution {
public:
    int reverse(int x) {
    //     long r=0;
    //     while(x){
    //         r=r*10+x%10;
    //         x=x/10;
    //     }
    //     if(r>INT_MAX || r<INT_MIN) return 0;
    //     return (int)(r);
    // }
    long new_num = 0;
    
    while(x){
        new_num = new_num*10+x%10;
        x=x/10;
    }
    return(new_num>INT_MAX || new_num<INT_MIN)? 0 :(int)(new_num);
    }
};