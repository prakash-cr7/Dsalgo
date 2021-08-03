#include<bits/stdc++.h>
using namespace std;

#define long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    string s,ans{};
    cin>>s;
    int count = 1;
    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i+1] == s[i]){
            count++;
        } else {
            if(count > 1){
              ans += (s[i] + to_string(count));
              count = 1;
            } else {
              ans += s[i];
              count = 1;
            }
        }
    }
    cout<<ans;
}

//aabbbcabcd