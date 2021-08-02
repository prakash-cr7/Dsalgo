#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string enemy, greg;
        cin >> enemy >> greg;
        long int gregs{};
        for (size_t i = 0; i < n; i++)
        {
            if (greg[i] == '1')
                gregs++;
        }
        int count{};
        if (!gregs)
            cout << 0 << endl;
        else
        {
            for (size_t i = 0; i < n; i++)
            {
                if (enemy[i] == '0' && greg[i] == '1')
                {
                    enemy[i] = '2';
                    greg[i] = '0';
                    count++;
                }
            }
            for (size_t i = 0; i < n; i++)
            {
                if (i % 2 == 1)
                {
                    if (enemy[i - 1] == '1' && greg[i] == '1')
                    {
                        enemy[i - 1] = '2';
                        greg[i] = '0';
                        count++;
                    }
                }
                else
                {
                    if (enemy[i + 1] == '1' && greg[i] == '1')
                    {
                        enemy[i + 1] = '2';
                        greg[i] = '0';
                        count++;
                    }
                }
            }
            cout << count << endl;
        }
    }
}