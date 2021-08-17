#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5, b=4;
    b = a*b;
    a = b/a;
    b = b/a;
    cout<<a<<" "<<b;
}
// 1 3 2 1
// 1 1 2 2
// 1 2 1 2
// 1 1 1 2
