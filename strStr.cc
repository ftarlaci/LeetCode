// Implement strStr().

// Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "") return 0;
        if(haystack == "" && needle != "") return -1;
        if(needle.length() > haystack.length()) return -1;
    
        unordered_map<char, int> mapped;
        for(auto c: needle) mapped[c]++;
        int needlesz = needle.size();
        int begin = 0;
        int end = 0;  
        while(end < haystack.length()){
            if(mapped[haystack[end++]]-- > 0) needlesz--;
            if(needlesz == 0){
                int i = begin;
                int j = 0;                
                while(j < needle.length() && haystack[i] == needle[j]) {
                    i++;
                    j++;
                }
                if(j == needle.length()) return begin;
            }
            if(end - begin == needle.length() && mapped[haystack[begin++]]++ >= 0) {
                needlesz++;
            }
        }
        return -1;
    }
