#include <bits/stdc++.h>
using namespace std;

int factorial(int a)
{
    if (a == 0 || a == 1)
        return 1;
    return a * factorial(a - 1);
}

int fibo(int a)
{
    if (a == 1)
        return 0;
    if (a == 2)
        return 1;
    return fibo(a - 1) + fibo(a - 2);
}

int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

bool p(string s)
{
    if (s.size() == 0 || s.size() == 1)
        return true;

    bool x = s[0] == s[s.size() - 1];

    return x & p(s.substr(1, s.size() - 2));
}

int sod(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sod(n / 10);
}

int ropeCut(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n == -1)
        return -1;
    int r = max(ropeCut(n - a, a, b, c), max(ropeCut(n - b, a, b, c), ropeCut(n - c, a, b, c)));
    if (r == -1)
        return -1;
    return r + 1;
}

void powerSet(string s, int a, string r)
{
    if (a == r.size())
    {
        cout << s << " ";
        return;
    }
    powerSet(s, a + 1, r + s[a]);
    powerSet(s, a + 1, r);
}

// int toh(int n, int a, int b, int c, int i) {
//     if(c == n) return i;
// }

int josephus(int n, int k) {
    if(n == 0 ) return 0;
    return (josephus(n-1, k) +k) % n;
}

int subsetSum(vector<int> a, int i, int s, int k){
    if(k == 0) return 1;

    if(i == a.size()){
        if(k == s) return 1;
        else return 0;
    }
    return subsetSum(a, i+1, s+a[i], k) +
    subsetSum(a, i+1, s, k);

} 

void permutaion(string s, int i = 0){
    if(i == s.length()-1){
        cout << s << " ";
        return;
    }
    for(int j=i; j<s.length(); j++){
        swap(s[i], s[j]);
        permutaion(s, i+1);
        swap(s[j], s[i]);
    }
}

int main()
{
    permutaion("abcd");
}

// 0 1 1 2 3 5

/*
 1 = 1
 2 = 1
 3 = 1+1
 4 = 1
 5 = 1+1
 6 = 1+1
 7 = 1+1+1
 8 = 1
 9 = 1+1
 10 = 1+1
 11 = 1+1+1
 12 = 1+1
 13=  1+1+1
 14 = 1+1+1
 15 = 1+1+1+1
*/
