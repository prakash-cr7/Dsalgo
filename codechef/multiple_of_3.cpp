#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, k;
        cin >> k >> a >> b;
        ll ans = a + b;
        int temp = ans;
        if (k > 2)
        {
            ans += temp % 10;
            int l = (k - 3) % 4;
            ll m = (k - 3) / 4;
            ans += (m * ((2 * temp) % 10 + (4 * temp) % 10 + (8 * temp) % 10 + (6* temp) % 10 )) % 3;
            if (l == 3)
            {
                ans += ((2 * temp) % 10 + (4 * temp) % 10 + (8 * temp) % 10);
            }
            if (l == 2)
            {
                ans += ((2 * temp) % 10 + (4 * temp) % 10);
            }
            if (l == 1)
            {
                ans += ((2 * temp) % 10);
            }
        }
        if (ans % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}

// a, b, a+b, 2a+2b, 4a+4b, 8a+8b, 16a+16b, 32a+32b, 64a+64b
// k=9
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233
// 0 1 1 2 3 5 8 3  1  4  5  9  4   3 7 0 3 6
// 0 1 2 3 5 8 13
// 0 1 1 2 0 2 2 0  1
// a * 1st + b * 2nd

// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0),cout.tie(0);
//     int t;
//     cin>>t;
//     while (t--){
//         ll a,b,k;
//         cin>>k>>a>>b;
//         int lsb[60];
//         lsb[0] = 0;
//         lsb[1] = 1;
//         for (size_t i = 2; i < 60; i++)
//         {
//             lsb[i] = (lsb[i-1] + lsb[i-2]) % 10;
//         }

//         int l = k/60;
//         int m = k%60;

//         ll sum{};
//         for (size_t i = 2; i < 61; i++)
//         {
//             sum += (a * (lsb[i-2]) + b*(lsb[i-1])) % 10 ;
//         }
//         ll ans = a + ( (l * sum));
//         ll remaining{};
//         for (size_t i = 2; i < m+1; i++)
//         {
//             remaining += (a * (lsb[i-2]) + b*(lsb[i-1])) % 10 ;
//         }
//         ans +=remaining;
//         cout<<ans%3<<endl;
//     }
// }