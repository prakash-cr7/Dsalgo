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
        ll n;
        cin>>n;
        ll a[n];
        ll max {};
        for(ll i=0; i<n; i++) {
            cin>>a[i];
            if( a[i] > max ) max = a[i];
        }
        ll count = 0;
        if(a[0] == max) {
            ll x = a[n-1];
            for(ll i=n-1; i>=0; i--) {
                if( a[i] > x ) {
                    x = a[i];
                    count++;
                }
            }
            if(a[0] == a[n-1]) cout << 1 << endl;
            else cout << count << endl;
        } else cout << -1 << endl;
    }
}