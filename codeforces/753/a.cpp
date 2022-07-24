#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int solve(string a, string s) {
    if(s.size() == 1) return 0;
    unordered_map<char, int> am {};
    for(int i=0; i<a.size(); i++){
        am[a[i]] = i;
    }
    int ans {};
    int pos = am[s[0]];
    for(int i=1; i < s.size(); i++){
        int diff = am[s[i]] - pos;
        pos = am[s[i]];
        ans += abs(diff);
    }
    return ans;
}

int main() {
    size_t t;
    cin>>t;
    while (t--)
    {
        string a,s;
        cin>>a>>s;
        cout << solve(a,s) << endl;
    }
}