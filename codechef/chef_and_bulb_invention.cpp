#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int solve(ll n, ll p, ll k)
{
   if(p%k < n-k) return ((p % k) * (((n - 1) / k) + 1)) + ((p / k) + 1);
   else return n - (k - ((p%k) -1));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, p, k;
        cin >> n >> p >> k;
        cout << solve(n, p, k) << endl;
    }
}

// 7 6 3
// 0 3 6 1 4 7 2 5 8
// 1 2 3 4 5 6 7 8 9

// 9 7 2
// 0 2 4 6 8 1 3 5 7 9
// 1 2 3 4 5 6 7 8 9 10