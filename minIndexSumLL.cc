/* Suppose Andy and Doris want to choose a restaurant for dinner, and they both have a list of  
    favorite restaurants represented by strings.
	You need to help them find out their common interest with the least list index sum. If there is a choice tie between answers, output all of them with no order requirement. You could assume there always exists an answer.
	Example 1:
	Input:
	["Shogun", "Tapioca Express", "Burger King", "KFC"]
	["Piatti", "The Grill at Torrey Pines", "Hungry Hunter Steakhouse", "Shogun"]
	Output: ["Shogun"]
	Explanation: The only restaurant they both like is "Shogun".
	Example 2:
	Input:
	["Shogun", "Tapioca Express", "Burger King", "KFC"]
	["KFC", "Shogun", "Burger King"]
	Output: ["Shogun"]
	Explanation: The restaurant they both like and have the least index sum is "Shogun" with index sum 1 (0+1).
	Note:
	The length of both lists will be in the range of [1, 1000].
	The length of strings in both lists will be in the range of [1, 30].
	The index is starting from 0 to the list length minus 1.
	No duplicates in both lists.
*/

/*  Normally we could sort the shorter (if any) vector and do a search over the bigger vector and 
	see if there are any common elements. However, since we care about the index number of the common
	element we can't take advantage of the sorting. 
	so we should use a hashmap. */
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    	vector<string> intersect;
        unordered_map<string,int> m;
        int minIndex = INT_MAX;
        for(int i = 0; i < list1.size(); i++) {
            m[list1[i]] = i; // put list one in map
        }
        for(int i = 0; i < list2.size(); i++) {
            if(m.count(list2[i]) != 0) {
                if(m[list2[i]] + i < minIndex) {
                    minIndex = m[list2[i]] + i, intersect.clear(), intersect.push_back(list2[i]);
                } else if(m[list2[i]] + i == minIndex){
                    intersect.push_back(list2[i]);
                }
            }
        }
        return intersect;        
    }
};