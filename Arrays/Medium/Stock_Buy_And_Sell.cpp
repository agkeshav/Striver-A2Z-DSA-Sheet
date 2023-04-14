#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int ans = 0;
    int minStock = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        minStock = min(minStock, prices[i]);
        ans = max(ans, prices[i] - minStock);
    }
    return ans;
}
int main(){

return 0;
}