// Source : https://leetcode.com/problems/split-a-string-in-balanced-strings/
// Author : Jerry
// Date   : 2021-04-25

/********************************************************************************** 
* 
* Balanced strings are those that have an equal quantity of 'L' and 'R' characters.
* Given a balanced string s, split it in the maximum amount of balanced strings.
* Return the maximum amount of split balanced strings.
* 
* Example 1:
* Input: s = "RLRRLLRLRL"
* Output: 4
* Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.
*            
**********************************************************************************/

int balancedStringSplit(string s) {
    int bal = 0, count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'L')
            bal--;
        else
            bal++;
        if(bal == 0)
            count++;
    }
    return count;
}
