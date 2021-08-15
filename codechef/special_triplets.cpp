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
        ll count{};
        ll n;
        cin>>n;
        for (size_t a = 1; a <= n; a++)
        {
            for (size_t b = 1; b <= n; b++)
            {
                if(a % b != 0){
                    ll c = a%b;
                    if(b % c == 0){
                        count++;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
}

// 3/2 2  9/4 14/5 