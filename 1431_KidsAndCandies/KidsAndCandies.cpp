// Source : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
// Author : Jerry
// Date   : 2021-04-15

/********************************************************************************** 
* 
* Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.
* For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. 
* Notice that multiple kids can have the greatest number of candies.
*
* Example 1:
* Input: candies = [2,3,5,1,3], extraCandies = 3
* Output: [true,true,true,false,true] 
* Explanation: 
* Kid 1 has 2 candies and if he or she receives all extra candies (3) will have 5 candies --- the greatest number of candies among the kids. 
* Kid 2 has 3 candies and if he or she receives at least 2 extra candies will have the greatest number of candies among the kids. 
* Kid 3 has 5 candies and this is already the greatest number of candies among the kids. 
* Kid 4 has 1 candy and even if he or she receives all extra candies will only have 4 candies. 
* Kid 5 has 3 candies and if he or she receives at least 2 extra candies will have the greatest number of candies among the kids.
*            
**********************************************************************************/

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
{
    vector<bool> output;
    int max = *max_element(candies.begin(), candies.end());
    for(int i = 0; i < candies.size(); i++)
    {
        if(candies[i]+extraCandies >= max)
            output.push_back(true);
        else
            output.push_back(false);
    }
    return output;
}
