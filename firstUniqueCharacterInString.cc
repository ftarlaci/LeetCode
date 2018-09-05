/*	
Given a string, find the first non-repeating character in it and
return it's index. If it doesn't exist, return -1.
Examples:
s = "leetcode"
return 0.
s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.
*/
class Solution {
public:
    int firstUniqChar(string s) {
    	vector<int> vec(26, 0);  // give a size to the vector at initialization and set each index to 0
        for (auto uniq : s) {
        	vec[uniq - 'a'] += 1;
        }
        for (int i = 0; i < s.size(); i++) {
        	if (vec[s[i]-'a'] == 1) return i;
        }
        return -1;        
    }
};
