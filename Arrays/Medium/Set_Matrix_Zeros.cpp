#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<pair<int, int>> vp;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                vp.push_back(make_pair(i, j));
            }
        }
    }
    for (int i = 0; i < vp.size(); i++)
    {
        int a = vp[i].first;
        int b = vp[i].second;
        for (int i = 0; i < cols; i++)
        {
            matrix[a][i] = 0;
        }
        for (int i = 0; i < rows; i++)
        {
            matrix[i][b] = 0;
        }
    }
}
int main(){

return 0;
}