#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> &arr, int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, arr[i]);
    }
    return ans;
}
int main(){
    
return 0;
}