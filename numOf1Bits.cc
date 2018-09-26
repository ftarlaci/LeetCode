/*
Write a function that takes an unsigned integer and returns the number of '1' 
bits it has (also known as the Hamming weight).

Example 1:

Input: 11
Output: 3
Explanation: Integer 11 has binary representation 00000000000000000000000000001011 
Example 2:

Input: 128
Output: 1
Explanation: Integer 128 has binary representation 00000000000000000000000010000000
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        // bitset<32> in(n);        
        // string s = in.to_string();
        // int num = 0;
        // for(int i = 0; i < s.length(); i++){
        //     if(s[i] == "1"){
        //         num++;
        //     }
        // }
        // return num;
        // OR
        return __builtin_popcount(n);
    }
};