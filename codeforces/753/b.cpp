#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll solve(ll x, ll n) {
}

int main() {
    size_t t;
    cin>>t;
    while (t--)
    {
        ll x,n;
        cin>>x>>n;
        cout << solve(x,n) << endl;
    }
}

/*
 6,6
 5, 7, 10, 6, 1, 7

 if n is odd
 n+1, n-1, n+2, n-2, n+3, n-3, n+4, n-4, n+5, n-5, n+6, n-6, n+7, n-7, n+8, n-8

 if n is even
 n-1, n+1, n+3, n, n-5, n+1, n+7, n+14, n+6,

 10,10

 9, 11, 14, 10, 5, 11, 18, 10, 1, 11, 22, 10, -3, 11, 26, 10, -7, 11, 
*/