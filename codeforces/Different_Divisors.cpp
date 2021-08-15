#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int n)
{
    for (size_t i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int nextPrime(int n)
{
    if (isPrime(n)) return n;
    else return nextPrime(++n);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        int a = 1 + d;
        cout << nextPrime(a) << endl;
        int b = nextPrime(a) + d;
        cout << nextPrime(b) << endl;
    }
}

// 1 4 7 10
// 28 -> 1 2 4 7 14 28
// 35 -> 1 5 7 35
// 45 -> 1 3 5 9
// 55 -> 1 5 11 55

// 1 5 9 13
// 45
// 55 -> 1 5 11 55