// Source : https://leetcode.com/problems/count-good-triplets/
// Author : Jerry
// Date   : 2021-04-27

/********************************************************************************** 
* 
* Given an array of integers arr, and three integers a, b and c. You need to find the number of good triplets.
* A triplet (arr[i], arr[j], arr[k]) is good if the following conditions are true:
* 0 <= i < j < k < arr.length
* |arr[i] - arr[j]| <= a
* |arr[j] - arr[k]| <= b
* |arr[i] - arr[k]| <= c
* Where |x| denotes the absolute value of x.
* Return the number of good triplets.
* 
* Example 1:
* Input: arr = [3,0,1,1,9,7], a = 7, b = 2, c = 3
* Output: 4
* Explanation: There are 4 good triplets: [(3,0,1), (3,0,1), (3,1,1), (0,1,1)].
*            
**********************************************************************************/

int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
    int count = 0;
    int g = 0, h = 0;
    for (int i = 0; i < arr.size(); i++)
    {   
        for (int j = i+1; j < arr.size(); j++)
        {
            if (abs(arr[i]-arr[j]) <= a)
            {
                for (int k = j+1; k < arr.size(); k++)
                {
                    if (abs(arr[j]-arr[k]) <= b)
                        g=1;
                    if (abs(arr[i]-arr[k]) <= c)
                        h=1;
                    if (g*h == 1)
                        count+=1;
                    g = 0; h = 0;
                }
            }
        }
    }
    return count;
}
