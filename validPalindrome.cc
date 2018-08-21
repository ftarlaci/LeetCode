/*Given a string, determine if it is a palindrome, considering only alphanumeric 
characters and ignoring cases.
Note: For the purpose of this problem, we define empty string as valid palindrome.
Example 1:
Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:
Input: "race a car"
Output: false
*/
class Solution {
public:
    static bool isNotAlpha(char ch){
        return !isalnum(ch);
    }
    bool isPalindrome(string s) {
        if(s == "" || s.length() == 1) return true;
        s.erase(remove_if(s.begin(), s.end(), isNotAlpha), s.end());
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        return equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());
    }
};