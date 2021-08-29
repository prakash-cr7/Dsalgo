#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll max {};
        for(ll i=0; i<n; i++) {
            cin>>a[i];
            if(a[i] > max) {
                max = a[i];
            }
        }
        vector<ll> index {};
        for(ll i=0; i<n; i++) {
            if(a[i] == max) index.push_back(i);
        }
        ll count{};
        for(auto i: index) {
            if(i >= k -1) count+=(n-i);
        }
        cout<<count<<endl;
    }
}