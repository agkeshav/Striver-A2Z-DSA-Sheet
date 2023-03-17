// https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

#include <bits/stdc++.h>
using namespace std;
int print2largest(int arr[], int n)
{
    // code here
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(arr[i], maxi);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < maxi)
        {
            ans = max(ans, arr[i]);
        }
    }
    if (ans == 0)
    {
        return -1;
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