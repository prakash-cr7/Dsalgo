#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t t;
    cin >> t;
    while (t--)
    {
        size_t n;
        cin >> n;
        unsigned long long int a[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unsigned long long int max = a[0] * a[1];

        for (size_t i = 1; i < n-1; i++)
        {
            if (a[i] * a[i+1] > max)
            {
                max = a[i] * a[i + 1];
            }
        }
        cout << max << endl;
    }
}
