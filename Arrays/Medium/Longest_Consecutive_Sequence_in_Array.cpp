#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    unordered_set<int> hashSet;
    int ans = INT_MIN;
    if (nums.size() == 0)
    {
        return 0;
    }
    for (int i : nums)
    {
        hashSet.insert(i);
    }

    for (int num : nums)
    {
        if (!hashSet.count(num - 1))
        {
            int currentNum = num;
            int longestStreak = 1;
            while (hashSet.count(currentNum + 1))
            {
                currentNum++;
                longestStreak++;
            }
            ans = max(ans, longestStreak);
        }
    }
    return ans;
}
int main()
{

    return 0;
}