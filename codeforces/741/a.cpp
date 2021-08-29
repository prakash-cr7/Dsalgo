#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        ll x = a/2;
        ll y = b/2;
        if(a > y) cout<<b%a<<endl;
        else cout<<b%(y+1)<<endl;
    }
}
