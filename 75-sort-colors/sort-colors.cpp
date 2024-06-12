class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),l=0,r=n-1,id=0;
        while(id<=r){
            if(nums[id]==0){
                swap(nums[l++],nums[id++]);
            }
            else if(nums[id]==2){
                swap(nums[id],nums[r--]);
            }
            else{
                id++;
            }
        }
        return;
    }
};