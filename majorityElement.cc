/*
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:

Input: [3,2,3]
Output: 3
Example 2:

Input: [2,2,1,1,1,2,2]
Output: 2
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    	unordered_map<int, int> freqMap; 
        int n = nums.size();
        for (int i = 0; i < n; i++){
            if (++freqMap[nums[i]] > n / 2){
            	return nums[i];
            }
         }
          

          // below is the first (unsuccessful) attempt, keeping it for comparison

        // int sz = nums.size();
        // if(sz == 2) return nums[0]; // guaranteed to have a majority element so both of the numbers have to be the same. 
        // int majority = floor(sz / 2); 
        // unordered_map<int, int> freqMap;
        
        // // If you don't want to change the items as well as want to avoid making 
        // // copies, then auto const & is the correct choice // stackoverflow
        // for(auto const & i : nums){
        //     freqMap[nums[i]]++; // store nums and frequency in the map[i]
        // }
        
        // for(unordered_map<int, int>::iterator itr = freqMap.begin(); itr != freqMap.end(); ++itr){
        //     if(itr->second > majority){
        //         return itr->first;
        //     }
        // }
        // return 0;
    }
};