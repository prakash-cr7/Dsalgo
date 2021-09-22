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
        ll a[n], b[n-1];
        ll minA = 99999999,maxA{}, minB = 999999999, maxB{};
        unordered_map<int, bool> ma {};
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i] < minA) minA = a[i];
            if(a[i] > maxA) maxA = a[i];
            ma[a[i]] = true; 
        }
        for(int i=0; i<n-1; i++){
            cin>>b[i];
            if(a[i] < minB) minB = a[i];
            if(a[i] > maxB) maxB = a[i]; 
        }
        ll x = minB-minA;
        ll y = maxB-maxA;
        bool p = true,q= true;
        if(n-1 == 1) {
            cout<<max(b[0], b[1]) - a[0] << endl;
        } else {
            for(int i=0; i<n-1; i++) {
                if(ma[b[i] + x] == false) {
                    p = false;
                    break;
                }
            }
            for(int i=0; i<n-1; i++) {
                if(ma[b[i] + y] == false) {
                    q = false;
                    break;
                }
            }
        }
        if(p) cout << x <<endl;
        else cout << y <<endl;
    }
}