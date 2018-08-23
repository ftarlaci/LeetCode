/*Given a non-empty string s, you may delete at
most one character. Judge whether you can make it a palindrome.
Example 1:
Input: "aba"
Output: True
Example 2:
Input: "abca"
Output: True
Explanation: You could delete the character 'c'.
Note:
The string will only contain lowercase characters a-z. 
The maximum length of the string is 50000.
*/
class Solution {
  private:  
    bool isPalindrome(string s, int low, int high) {
        while(low < high) {
            if (s[low] != s[high]){
                return false;
            }
            low++; high--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int low = 0;
        int high = s.size() - 1;     
        while(low < high) {
            if (s[low] != s[high]) {
                return (isPalindrome(s, low + 1, high) || isPalindrome(s, low, high - 1));
            }
            low++; high--;
        }
        return true;
    }
};