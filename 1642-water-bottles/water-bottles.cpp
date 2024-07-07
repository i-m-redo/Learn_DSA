class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        // int full_bottels = numBottles;
        // int empty_bottels = numBottles;
        // int total_empty_bottels = empty_bottels;
        // int drink = full_bottels;
        
        // while(full_bottels){
        //     full_bottels = (total_empty_bottels/numExchange);
        //     empty_bottels = (total_empty_bottels%numExchange);
        //     total_empty_bottels  = full_bottels + empty_bottels;
        //     drink+=full_bottels;
        // }

        return numBottles+(numBottles-1)/(numExchange-1);
    }
};