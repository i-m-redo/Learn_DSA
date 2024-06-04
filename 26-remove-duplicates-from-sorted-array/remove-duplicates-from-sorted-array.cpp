class Solution {
public:

    int removeDuplicates(vector<int>& nums) {
        //Using set
        /*set<int> unique_nums(nums.begin(),nums.end());
        nums.clear();
        nums.assign(unique_nums.begin(),unique_nums.end());
        return nums.size();*/
        int k=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};