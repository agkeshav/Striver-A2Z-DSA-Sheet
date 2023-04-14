#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    if (intervals.size() == 1 || intervals.size() == 0)
    {
        return intervals;
    }
    sort(intervals.begin(), intervals.end());
    vector<int> temp = intervals[0];
    for (int i = 1; i < intervals.size(); i++)
    {
        if (temp[1] >= intervals[i][0])
        {
            temp[1] = max(temp[1], intervals[i][1]);
        }
        else
        {
            ans.push_back(temp);
            temp = intervals[i];
        }
    }
    ans.push_back(temp);
    return ans;
}
int main()
{

    return 0;
}