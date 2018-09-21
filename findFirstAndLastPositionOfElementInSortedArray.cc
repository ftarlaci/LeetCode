/*
34. Find First and Last Position of Element in Sorted Array
Given an array of integers nums sorted in ascending order, 
find the starting and ending position of a given target value.
Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
*/

// lambda with any_of example:
// if(any_of(nums.begin(), nums.end(), [=](int i){return i == target;})){

	// offset an iterator to get a subvector:
	// vector<T>::const_iterator first = myVec.begin() + 100000;
	// vector<T>::const_iterator last = myVec.begin() +  101000;
	// vector<T> newVec(first, last); will have newvec[0] = 100000
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // our cue is the given runtime complexity, which calls 
        // for a binary search of the array since it is sorted. 

    }
};