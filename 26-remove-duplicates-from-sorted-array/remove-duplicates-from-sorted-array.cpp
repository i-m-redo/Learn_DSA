class Solution {
public:

    int removeDuplicates(vector<int>& nums) {
        set<int> unique_nums(nums.begin(),nums.end());
        nums.clear();
        nums.assign(unique_nums.begin(),unique_nums.end());
        return nums.size();
    }
};