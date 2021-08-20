#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, int q)
{
    vector<pair<char, int>> x;
    int y{};
    map<int, bool> inside{};
    for (size_t i = 1; i <= q; i++)
    {
        char a;
        int b;
        cin >> a >> b;
        x.push_back(make_pair(a, b));
    }
    for (size_t i = 0; i < q; i++)
    {
        if (x[i].first == '+')
        {
            if (inside[x[i].second])
            {
                cout << "Inconsistent" << endl;
                return;
            }
            else
            {
                inside[x[i].second] = true;
                y++;
            }
        }
        if (x[i].first == '-')
        {
            if (!inside[x[i].second])
            {
                cout << "Inconsistent" << endl;
                return;
            }
            else
            {
                inside[x[i].second] = false;
                y--;
            }
        }
        if (y > m)
        {
            cout << "Inconsistent" << endl;
            return;
        }
    }
    cout << "Consistent" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        solve(n, m, q);
    }
}