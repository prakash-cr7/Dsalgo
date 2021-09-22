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
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        ll ans{};
        if(2*x <= y) {
            ans += ((a-1)*x + (b-1)*x);
        } else {
           ans += (((min(a,b)-1) * y) + (max(a,b) - min(a,b) * x));
        }
        cout<<ans<<endl;
    }
}