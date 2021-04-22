// Source : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// Author : Jerry
// Date   : 2021-04-22

/********************************************************************************** 
* 
* Given an integer number n, return the difference between the product of its digits and the sum of its digits.
* 
* Example 1:
* Input: n = 234
* Output: 15 
* Explanation: 
* Product of digits = 2 * 3 * 4 = 24 
* Sum of digits = 2 + 3 + 4 = 9 
* Result = 24 - 9 = 15
*            
**********************************************************************************/

int subtractProductAndSum(int n) {
    vector<int> digits;
    while(n!=0)
    {
        digits.push_back(n%10);
        n=n/10;
    }
    int prod = 1, sum = 0;
    for(int i = 0; i < digits.size(); i++)
    {
        prod*=digits[i];
        sum+=digits[i];
    }
    return (prod-sum);
}
