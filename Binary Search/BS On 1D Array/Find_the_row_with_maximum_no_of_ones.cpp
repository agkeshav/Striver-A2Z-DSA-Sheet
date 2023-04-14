#include <bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    // code here
    pair<int, int> p = make_pair(INT_MAX, INT_MAX);
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = m - 1;
        int ans = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[i][mid] == 0)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        if (ans < p.first)
        {
            p.first = ans;
            p.second = i;
        }
    }
    int possAns = p.second;
    bool ans = true;
    for (int i = 0; i < m; i++)
    {
        if (arr[p.second][i] == 1)
        {
            ans = false;
        }
    }
    if (ans)
    {
        return -1;
    }
    else
    {
        return p.second;
    }
}
int main()
{

    return 0;
}