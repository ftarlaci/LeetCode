/*Given two strings s and t , write a function to determine if t is an anagram of s.
    Example 1:
    Input: s = "anagram", t = "nagaram"
    Output: true
    Example 2:

    Input: s = "rat", t = "car"
    Output: false
    Note:
    You may assume the string contains only lowercase alphabets.
*/
bool areAnagrams(string s, string t) { 
	if (s.length() != t.length()) return false;
        int n = s.length();
        int frequency[26] = {0};
        for (int i = 0; i < n; i++) { 
            frequency[s[i] - 'a']++;
            frequency[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
            if (frequency[i]) return false;
        return true; 
}
