class Solution {
public:
    int passThePillow(int n, int time) {
        int time_cycle = (n-1)*2;
        int time_rem = time%time_cycle;
        return 1+((time_rem<n)?time_rem:time_cycle-time_rem);
    }
};