// Source : https://leetcode.com/problems/number-of-good-pairs/
// Author : Jerry
// Date   : 2021-04-17

/********************************************************************************** 
* 
* Given an array of integers nums.
* A pair (i,j) is called good if nums[i] == nums[j] and i < j.
* Return the number of good pairs.
*
* Example 1:
* Input: nums = [1,2,3,1,1,3]
* Output: 4
* Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
*            
**********************************************************************************/

int numIdenticalPairs(vector<int>& nums) {
    int sum = 0;
    std::map<int, int> countMap;
    for(auto & elem : nums)
    {
        auto result = countMap.insert(std::pair<int, int>(elem, 1));
        if (result.second == false)
            result.first->second++;
    }
    for (auto & elem : countMap)
    {
        if (elem.second > 1)
        {
            sum+=(elem.second*(elem.second-1)/2);
        }
    }
    return sum;
}
