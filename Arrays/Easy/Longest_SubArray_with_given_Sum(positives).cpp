#include <bits/stdc++.h>
using namespace std;
int maxLen(vector<int> &A, int n, int k)
{
    // Your code here
    long sum = 0;
    int ans = 0;
    int i = 0, j = 0;
    while (j < n)
    {
        sum = sum + A[j];
        if (sum < k)
        {
            j++;
        }
        else if (sum == k)
        {
            ans = max(ans, (j - i + 1));
            j++;
        }
        else
        {
            while (sum > k)
            {
                sum = sum - A[i];
                i++;
                if (sum == k)
                {
                    ans = max(ans, (j - i + 1));
                }
            }
            j++;
        }
    }
    return ans;
}
int main()
{

    return 0;
}