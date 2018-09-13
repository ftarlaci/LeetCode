/*
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

Note: The algorithm should run in linear time and in O(1) space.

Example 1:

Input: [3,2,3]
Output: [3]
Example 2:

Input: [1,1,1,3,3,2,2,2]
Output: [1,2]
*/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freqMap; 
        vector<int> majors;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            if (++freqMap[nums[i]] > n / 3){
            	majors.push_back(nums[i]);
            }
         }
        return majors;  // not quite working,yet 
        
    }
};