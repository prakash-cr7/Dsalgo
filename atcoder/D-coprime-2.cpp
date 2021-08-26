#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    unordered_set<int> factors;
    for(int i=0; i<n; i++) {
        for(int j=1; j*j <= a[i]; j++) {
            if(a[i] % j == 0) {
                factors.emplace(j);
                factors.emplace(a[i]/j);
            }
        }
    }
    bool x[m+1] {true};
}