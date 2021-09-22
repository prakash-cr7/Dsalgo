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
        string ans = "";
        int a;
        int x{};
        cin>>a;
        for(int i=0; i<a; i++) {
            ans += '3';
            x+=3;
        }
        if(x % 9 == 0) {
            ans[a-1] = '6';
        }
        cout << ans <<endl;
    }
}