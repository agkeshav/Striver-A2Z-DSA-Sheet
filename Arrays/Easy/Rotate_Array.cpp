// https://leetcode.com/problems/rotate-array/
#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &nums, int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(nums[s], nums[e]);
        s++;
        e--;
    }
}
void rotate(vector<int> &nums, int k)
{
    // Logic is that reverse the whole vector then reverse first k part and then remaining part
    // T.C = O(N);
    // Ex:- i/p  nums = [1,2,3,4,5,6,7], k = 3
    // o/p = [5,6,7,1,2,3,4]
    // 7,6,5,4,3,2,1 ==> 5,6,7,4,3,2,1 ==> 5,6,7,1,2,3,4
    int a = nums.size();
    if (k % a == 0)
    {
        return;
    }
    else
    {
        int b = k % a;
        reverse(nums, a);
        reverse(nums, b);
        int s = b;
        int e = a - 1;
        while (s <= e)
        {
            swap(nums[s], nums[e]);
            s++;
            e--;
        }
    }
}
int main()
{

    return 0;
}