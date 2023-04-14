#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(int a[], int n)
{
    // Code here
    vector<int> ans;
    int max = a[n - 1];

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] >= max)
        {
            max = a[i];
            ans.push_back(max);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){

return 0;
}