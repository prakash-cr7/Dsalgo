#include<bits/stdc++.h>
using namespace std;

int main() {
    size_t t;
    cin>>t;
    while (t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int ans = a + (b*2) + (c*3);
        if(ans % 2) cout << 1 << endl;
        else cout << 0 << endl;
    }
}