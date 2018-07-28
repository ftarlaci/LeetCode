// You are climbing a stair case. It takes n steps to reach to the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
// Note: Given n will be a positive integer.
class Solution {
public:
    unordered_map<int, int> cache;
    int climbStairs(int n) {
		if(cache.find(n)!= cache.end()) return cache[n];
		int output = 0;
		if (n == 0) result = 0;
		else if (n == 1) output = 1;
		else if (n == 2) output = 2;
		else output = climbStairs(n - 1) + climbStairs(n - 2);
		cache[n] = output;
		return output;
    }
};