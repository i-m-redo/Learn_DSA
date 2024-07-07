class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int minValue = INT_MAX;
        int n = nums.size();
        if(n<=4) return 0;
        //Convert Right Three
        minValue = min(minValue,nums[n-4]-nums[0]);
        //Convert Left three
        minValue = min(minValue,nums[n-1]-nums[3]);
        //Convert Left 2 and right 1
        minValue = min(minValue,nums[n-2]-nums[2]);
        //Convert Left 1 and right 2
        minValue = min(minValue,nums[n-3]-nums[1]);

        return minValue;
        
    }
};