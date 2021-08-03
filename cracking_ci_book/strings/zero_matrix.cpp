#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int b[m][n];
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin>>a[i][j];
            b[i][j] = a[i][j];
        }   
    }
    cout<<endl;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(a[i][j] == 0){
                for (size_t k = 0; k < m; k++)
                {
                    b[i][k] = 0;
                }
                for (size_t k = 0; k < m; k++)
                {
                    b[k][j] = 0;
                }
            }
        }   
    }
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;   
    }
}
