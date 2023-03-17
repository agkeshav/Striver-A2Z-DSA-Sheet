// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &nums)
{
    // T.C. = O(N)
    int count = 0;
    // this loop is to check sortedness
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            count++;
        }
    }
    // This loop is to check whether array is rotated or not
    if (nums[0] < nums[nums.size() - 1])
    {
        count++;
    }
    return (count <= 1);
}
int main()
{

    return 0;
}