#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    unordered_map<int, int> a {};
    int i = 1, c = 1;
    while (a.size() < 1002)
    {
        if( i%3 == 0 || i%10 == 3) { i++; }
        else {a[c] = i; c++; i++;}
    }
    
    while (t--)
    {
        int k;
        cin>>k;
        cout<<a[k]<<endl;
    }
}

// 0 1 2 3 4 5 6 7 8 9