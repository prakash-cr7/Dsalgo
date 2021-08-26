#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        string s[n];
        for(int i=0; i<n; i++) {
            cin>>s[i];
        }
        string ans = "";
        for(int i=0; i<n; i++){
            if(s[i][i] == '1') ans += '0';
            else ans+='1';
        }
        cout<<ans<<endl;
    }
}