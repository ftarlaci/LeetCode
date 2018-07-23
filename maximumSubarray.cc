// Given an integer array nums, find the contiguous subarray
// (containing at least one number) which has the largest sum and return its sum.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int sum = 0;
        int maximum = INT_MIN;
        for(auto i : nums){
            sum = max(i, sum + i);
            maximum = max(maximum, sum);
        }
        return maximum;
    }
};
