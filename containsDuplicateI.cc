/*
Given an array of integers, find if the array contains any duplicates.
Your function should return true if any value appears at least twice in
the array, and it should return false if every element is distinct.
Example 1:
Input: [1,2,3,1]
Output: true
Example 2:

Input: [1,2,3,4]
Output: false
Example 3:

Input: [1,1,1,3,3,4,3,2,4,2]
Output: true
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        size_t dup = nums.size();
        if(!dup) return false;
        unordered_map<int, int> m;
        for(size_t i = 0; i < dup; i++){
            if(m.find(nums[i]) != m.end()){
                return true;
            }
            m[nums[i]] = 1;
        }
        return false;
    }
};