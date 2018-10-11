/*
Given an integer, write a function to determine if it is a power of two.

Example 1:

Input: 1
Output: true 
Explanation: 20 = 1
Example 2:

Input: 16
Output: true
Explanation: 24 = 16
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
         
        return n > 0 && (n & (n - 1)) == 0;
        //return (n != 0) && ((n & (n - 1)) == 0); will fail in negative nums
        // return (x & (x - 1)) == 0; this will retun true for 0 
    }
};