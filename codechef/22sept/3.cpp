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
        vector<pair<int,int>> ip {};
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            ip[i].first = a;
        }
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            ip[i].second = a;
        }
    }
}