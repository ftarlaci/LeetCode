/*  from Hackerrank. 
    Given two strings in lowercase, the task is to make them anagram. 
    The only allowed operation is to remove a character from any string. 
    Find minimum number of characters to be deleted to make both the strings anagram?
*/
int removeAnagram(string str1, string str2)
{
    // make hash array for both strings and calculate
    // frequency of each character
    int count1[26] = {0}, count2[26] = {0};
 
    // count frequency of each character in first string
    for (int i=0; str1[i]!='\0'; i++)
        count1[str1[i]-'a']++;
 
    // count frequency of each character in second string
    for (int i=0; str2[i]!='\0'; i++)
        count2[str2[i]-'a']++;
 
    // traverse count arrays to find number of characters
    // to be removed
    int result = 0;
    for (int i=0; i<26; i++)
        result += abs(count1[i] - count2[i]);
    return result;
}
 