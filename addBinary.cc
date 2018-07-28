// Given two binary strings, return their sum (also a binary string).
// The input strings are both non-empty and contains only characters 1 or 0.
class Solution {
public:
    string addBinary(string a, string b) {
    	string sum = "";
    	int i = a.size() - 1;
    	int j = b.size() - 1;
    	int carry = 0;
    	while(i >= 0 || j >= 0 || carry == 1){
    		carry +=((i >=0) ? a[i] - '0' : 0);
    		carry +=((j >=0) ? b[j] - '0' : 0);
    		sum = char(carry % 2 + '0') + sum;
    		// check for carry
    		carry /= 2;
    		i--;
    		j--;
    	}
    		return sum;
    } 
}


    	
        
    }
};