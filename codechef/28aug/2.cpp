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
        int n;
        cin>>n;
        int s = (n*(n+1))/2;
        if(n%2 == 0) cout << n << endl;
        else cout << n-1 <<endl;
    }
}