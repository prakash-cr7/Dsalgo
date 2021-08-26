#include <bits/stdc++.h>
using namespace std;

void nPermute(string str, long int n)
{
    // Sort the string in lexicographically
    // ascending order
    sort(str.begin(), str.end());
  
    // Keep iterating until
    // we reach nth position
    long int i = 1;
    do {
        // check for nth iteration
        if (i == n)
            break;
  
        i++;
    } while (next_permutation(str.begin(), str.end()));
  
    // print string after nth iteration
    cout << str <<endl;
}


int main()
{
    string s;
    long long int k;
    cin>>s>>k;
    nPermute(s,k);
}