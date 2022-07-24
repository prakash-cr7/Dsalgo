#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s = "abc";
    vector<string> ans;
    int n = s.size();
    n = (1 << n);
    for (int i = 0; i < n; i++)
    {
        int temp = i;
        string x = "";
        int j = 0;
        while (temp > 0)
        {
            if (temp % 2)
                x += s[j];
            j++;
            temp = temp >> 1;
        }
        ans.push_back(x);
    }
    for(auto d: ans) cout << d << " ";
}
