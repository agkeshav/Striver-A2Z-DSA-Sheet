// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    // Using two pointers
    //T.C = O(N)
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }
    return i + 1;
}
int main()
{

    return 0;
}