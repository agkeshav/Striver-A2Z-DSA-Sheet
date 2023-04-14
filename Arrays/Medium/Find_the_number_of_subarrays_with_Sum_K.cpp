#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int> &nums, int k)
{
    if (nums.size() == 1 && k != nums[0])
    {
        return 0;
    }
    else
    {
        vector<int> prefix;
        prefix.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            prefix.push_back(nums[i] + prefix[i - 1]);
        }

        int ans = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (prefix[i] == k)
            {
                ans++;
            }
            if (mp.find(prefix[i] - k) != mp.end())
            {
                ans = ans + mp[prefix[i] - k];
            }
            mp[prefix[i]]++;
        }

        return ans;
    }
}
int main()
{

    return 0;
}