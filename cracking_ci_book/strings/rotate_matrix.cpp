#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char a[n][n];
    char b[n][n] {};
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }   
    }
    cout<<endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            b[j][n-(i+1)] = a[i][j];
        }   
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;   
    }
}

/*
a b c  a b a 
d e f  d e b
g h i  g h c
*/


// rotate matrix
// put ith row in n-ith column