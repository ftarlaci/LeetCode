/*Given an array of integers, return indices of the two numbers such that
 they add up to a specific target. You may assume that each input would have
  exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sum;
        
        for(int i = 0; i < nums.size(); i++) {
            int found = target - nums[i]; // complement
            auto foundPlus = sum.find(found);
            
           /*So now you know that dereferencing a std::map iterator 
			gives you a std::pair, you can then access its elements
			with first and second. For example, (*it).first will give
			you the key and (*it).second will give you the value. These
			are equivalent to it->first and it->second.*/
            if(foundPlus != sum.end()) {
                return vector<int> {foundPlus->second, i};
            }
            sum[nums[i]] = i;
        }
    }
}