/*Write a function that takes a string as input and reverse only the vowels of a string.
	Example 1:
	Input: "hello"
	Output: "holle"
	Example 2:
	Input: "leetcode"
	Output: "leotcede"
	Note:
	The vowels does not include the letter "y".
*/
class Solution {
public:

	// a utility function to check if a given character is a vowel.
	bool isVowel(char c) {

     	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' 
     		|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
	}

    string reverseVowels(string s) {
        int front = 0; // get the first char
        int back = s.length() - 1; // get the last ch in the string
        while(front < back){
        	while(front < back && !isVowel(s[front])){
        		front++;
        	}
        	while(front < back && !isVowel(s[back])){
        		back--;
        	}
        	swap(s[front++], s[back--]);
        }
        return s;
    }
};