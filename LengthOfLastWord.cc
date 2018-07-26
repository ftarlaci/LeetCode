// Given a string s consists of upper/lower-case alphabets and empty
// space characters ' ', return the length of last word in the string.
// If the last word does not exist, return 0.
// Note: A word is defined as a character sequence consists of non-space
// characters only.
class Solution {
public:
    int lengthOfLastWord(string s) {
    	if(s == " ") return 0; // string is empty
        char space = ' ';
    	int i = s.length() - 1;
        while(i >= 0 && s[i] == space) {
            i--;
        }
        int j = i;
        while(j >= 0 && s[j] != space){
            j--;
        }
        return i - j;
    }
};
