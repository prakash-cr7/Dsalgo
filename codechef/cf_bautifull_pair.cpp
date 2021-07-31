#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        unordered_map<long long int,long long int> mp {};
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
            if(mp[a[i]] < 1) mp[a[i]] = 1;
            else mp[a[i]] += 1;
        }
        long long int count = 0;
        for (size_t i = 0; i < n; i++)
            count += (n-mp[a[i]]);
        cout<<count<<endl;
    }
}