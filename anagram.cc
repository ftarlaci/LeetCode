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
