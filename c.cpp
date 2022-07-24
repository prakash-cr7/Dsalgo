#include <bits/stdc++.h>
using namespace std;

int num(int n)
{
    int i = 0;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            return i;
        }
        n = n >> 1;
        ++i;
    }
    return i;
}

vector<int> singleNumber(vector<int> nums)
{
    int n = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
        n = nums[i] ^ n;
    }
    cout<< n<<"  ";
    int x = num(n);
    vector<int> ans(2);
    for (int i = 0; i < nums.size(); i++)
    {
        if ((nums[i] >> x) % 2 == 0)
            ans[0] ^= nums[i];
        else
            ans[1] ^= nums[i];
    }
    int p = min(ans[0], ans[1]);
    ans[1] = max(ans[0], ans[1]);
    ans[0] = p;
    return ans;
}

int main()
{
    vector<int> ip = {19, 20, 7, 3, 5, 26, 19, 27, 20, 27, 3, 16, 7, 5, 9, 25, 8, 9, 8, 26,};
    auto a = singleNumber(ip);
    for(auto x: a) cout <<x<<" ";
    // int x = 16^25;
    // cout << x;
}

// 16 25