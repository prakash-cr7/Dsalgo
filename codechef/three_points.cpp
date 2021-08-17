#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        pair<ll, ll> a;
        pair<ll, ll> b;
        pair<ll, ll> c;
        cin>>a.first>>a.second>>b.first>>b.second>>c.first>>c.second;
        // Move parallel to x or y
        if(a.first == b.first || a.second == b.second){
            //Parallel to x
            if(a.second == b.second){
                if(c.first == b.first){
                    cout<<"YES"<<endl;
                }
                if(c.second == b.second && c.first >= b.first && b.first >= a.first){
                    cout<<"YES"<<endl;
                }
                else if(c.second == b.second && c.first <= b.first && b.first <= a.first){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            //Parallel to y
            else if(a.first == b.first){
                if(c.second == b.second){
                    cout<<"YES"<<endl;
                }
                else if(c.first == b.first && c.second >= b.second && b.second >= a.second){
                    cout<<"YES"<<endl;
                }
                else if(c.first == b.first && c.second <= b.second && b.second <= a.second){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        } else cout << "NO" << endl;
    }
}