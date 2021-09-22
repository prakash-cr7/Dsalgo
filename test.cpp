#include <bits/stdc++.h>
using namespace std;

int f(){
int a[11] = {2,14,8,22,2,34,22,6,6,14,8};
    int r = a[0];
    for(int i=0; i<11; i++)
    r = r^a[i];
    return r;
}

int main()
{
   cout<< f();
}