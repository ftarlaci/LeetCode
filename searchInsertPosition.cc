// Given a sorted array and a target value, return the 
//index if the target is found. If not, return the index 
//where it would be if it were inserted in order.
// You may assume no duplicates in the array.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    	if(nums.size() == 0) return 0;

    	auto lower = lower_bound(nums.begin(), nums.end(), target);
    	const bool found = lower != nums.end() && *lower == target;

    	if(found) {
    		auto index = distance(nums.begin(), lower);
    		return index;
    	}
        
        auto upper = upper_bound(nums.begin(), nums.end(), target);
        auto index = distance(nums.begin(), upper);
    	return index;    
    }
};