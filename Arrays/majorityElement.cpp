#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0;
        int element;

        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
            {
                count = 1;
                element = nums[i];
            }
            else if (element == nums[i])
            {
                count++;
            }
            else
                count--;
        }
        return element;
    }
};