/*Given a non-empty array of integers, every element appears three times except 
for one, which appears exactly once. Find that single one.
Note:
Your algorithm should have a linear runtime complexity. Could you implement
it without using extra memory?
Example 1:
Input: [2,2,3,2]
Output: 3
Example 2:
Input: [0,1,0,1,0,1,99]
Output: 99
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
    	// sorting requires O(n log(n)) so we will avoid it. 
        // HashMap requires extra space, so we will avoid it too.
        //sort(nums.begin(), nums.end());
        // the XOR solution in the Single Number question will need to be expanded
        int binary2 = 0;
        return accumulate(nums.begin(), nums.end(), 0, [&binary2] (int binary1, int n) { 
          binary1 ^= n & ~binary2; 
          binary2 ^= n & ~binary1; 
          return binary1;
        });   
    }
};