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
        ll a, b, c;
        cin >> a >> b >> c;
        ll e = max(a, b) - min(a, b);
        ll d = 2 + ((e - 1) * 2);
        if (c > d || (min(a,b) - (e - 1)) > 1)
        {
            cout << -1 << endl;
        }
        else
        {
            if (c + e <= d)
            {
                cout << c + e << endl;
            }
            else
                cout << c - e << endl;
        }
    }
}

