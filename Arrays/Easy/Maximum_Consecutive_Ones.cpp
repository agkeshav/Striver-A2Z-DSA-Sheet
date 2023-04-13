#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int ans = 0;
    int count = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == 1 && nums[i + 1] == 1)
        {
            count++;
        }
        else
        {
            ans = max(ans, count);
            count = 1;
        }
    }
    ans = max(ans, count);
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    if (sum == 0)
    {
        return 0;
    }
    else
    {
        return ans;
    }
}
int main()
{

    return 0;
}