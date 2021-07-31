#include<bits/stdc++.h>
using namespace std;

int main() {
    size_t t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        if(n % 10 == 9){
            cout<< (n/10) + 1 << endl;
        } else {
            cout<< n/10 << endl;
        }
    }
}

// 11 
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14  15 16 17 18 19 20 21 22 23 24
// 100 
// 9 19 29 39 49 59 69 79 89 99