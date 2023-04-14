#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> &nums)
{
    if (nums.size() == 1)
    {
        return nums;
    }
    vector<int> ans;
    int num1, num2 = -1;
    int c1 = 0, c2 = 0;
    for (int el : nums)
    {
        if (el == num1)
        {
            c1++;
        }
        else if (el == num2)
        {
            c2++;
        }
        else if (c1 == 0)
        {
            num1 = el;
            c1 = 1;
        }
        else if (c2 == 0)
        {
            num2 = el;
            c2 = 1;
        }
        else
        {
            c1--;
            c2--;
        }
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == num1)
        {
            cnt1++;
        }
        else if (nums[i] == num2)
        {
            cnt2++;
        }
    }
    if (cnt1 > (nums.size() / 3))
    {
        ans.push_back(num1);
    }
    if (cnt2 > (nums.size() / 3))
    {
        ans.push_back(num2);
    }
    return ans;
}
int main()
{

    return 0;
}