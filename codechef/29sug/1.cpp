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
        int a,b,c;
        cin>>a>>b>>c;
        int x = min(a, min(b,c));
        if(x == b ) cout << "Bob" << endl;
        else if(x == c) cout << "Alice" << endl;
        else cout << "Draw" << endl;
    }
}