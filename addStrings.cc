/*Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.
Note:
The length of both num1 and num2 is < 5100.
Both num1 and num2 contains only digits 0-9.
Both num1 and num2 does not contain any leading zero.
You must not use any built-in BigInteger library or convert the inputs to integer directly. no atoi() :(
*/
class Solution {
public:
    string addStrings(string num1, string num2) {

    	// check the length of the strings for aligning if necessary
    	if(num1.length() > num2.length()){
    		swap(num1, num2);
    	}
    	// will return sum in this string
    	string sum = "";
    	int firstNumLen = num1.length();  // length of the strings store as int. 
    	int secNumLen = num2.length();
    	// reverse , alternatively we could traverse from the end in loops for efficiency. 
    	reverse(num1.begin(), num1.end());
    	reverse(num2.begin(), num2.end());
    	// sum and pay attention to carry 
    	int carry = 0;
    	for(int i = 0; i < firstNumLen; i++){
    		int sumNum ((num1[i] - '0') + (num2[i] - '0') + carry);
    		sum.push_back(sumNum % 10 + '0');

    		// calculate carry
    		carry = sumNum / 10;
    	}
    	// larger number digits in case of carry
    	for(int j = firstNumLen; j < secNumLen; j++){
    		int sumNum = ((num2[j] - '0') + carry);
    		sum.push_back(sumNum % 10 + '0'); 
    		carry = sumNum / 10;
    	}
    	if(carry) {
    		sum.push_back(carry + '0');
    	}
    	// reverse sum so that we can print the result
    	reverse(sum.begin(), sum.end());
    	return sum;
    }
};