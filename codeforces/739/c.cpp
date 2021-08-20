#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int sq(int n){
    return pow(ceil(sqrt(n)), 2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin>>k;
        int r,c;
        int a = sq(k);
        int b = sqrt(a);
        if(k > a-b) {
            r = b;
            c = a-k+1;
        } else {
            c = b;
            r = k - pow(b-1, 2);
        }
        if(k==1){
            cout<<1<<" "<<1<<endl;
        } else cout<<r<<" "<<c<<endl;
    }
}
