#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    long long int a = (n) * (n + 1) / 2;
    long long int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    int ans = a - sum;
    return ans;
}
int main()
{

    return 0;
}