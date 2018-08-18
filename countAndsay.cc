// The count-and-say sequence is the sequence of integers with the first five terms as following:
// 1.     1
// 2.     11
// 3.     21
// 4.     1211
// 5.     111221
// 1 is read off as "one 1" or 11.
// 11 is read off as "two 1s" or 21.
// 21 is read off as "one 2, then one 1" or 1211.
// Given an integer n, generate the nth term of the count-and-say sequence.
// Note: Each term of the sequence of integers will be represented as a string.

class Solution {
public:
    string countAndSay(int n) {
    	if (n < 1) return "";
        string out = "1";
        for (int i = 2; i <= n; i++) {
            string curr = "";
            int j = 0;
            int k = 0;
            while (j < out.length()) {
                while (out[j] == out[k]) {
                    j++;
                }
                curr += to_string(j - k) + out[k];
                k = j;
            }
            out = curr;
        }
   	    return out;    
    }
};