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
        int a;
        int c{};
        for(int i=0; i<7; i++) {
            cin>>a;
            c+=a;
        }
        if(c>3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}