#include<bits/stdc++.h>
using namespace std;
void reverses(vector<int> &nums, int start, int end)
{
    while (start <= end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}
void nextPermutation(vector<int> &nums)
{
    if (nums.size() == 0 || nums.size() == 1)
    {
        return;
    }
    else
    {
        int ind1 = INT_MIN;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                ind1 = i;
                break;
            }
        }

        if (ind1 == INT_MIN)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        int ind2 = 0;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] > nums[ind1])
            {
                ind2 = i;
                break;
            }
        }
        swap(nums[ind1], nums[ind2]);
        reverses(nums, ind1 + 1, nums.size() - 1);
        return;
    }
}
int main(){

return 0;
}