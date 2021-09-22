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
        ll n,k,s;
        cin>>n>>k>>s;
        ll a = n*n;
        cout<<(s-a)/(k-1)<<endl;
    }
}