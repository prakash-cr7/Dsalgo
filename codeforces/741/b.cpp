#include <bits/stdc++.h>
using namespace std;
#define ll long long int

pair<int,int> solve(vector<int> n){
    pair<int, int> ans;
    for(int i=0; i<n.size(); i++) {
        if(n[i] == 4 || n[i] == 6 || n[i] == 8 || n[i] == 9) {
            ans.first = 1;
            ans.second = n[i];
            return ans;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin>>k;
        ll a;
        cin>>a;
        vector<int> digits;
        while (a)
        {
            digits.push_back(a%10);
            a /= 10;
        }
        reverse(digits.begin(), digits.end());
        const pair<int, int> ans = solve(digits);
        cout<<ans.first<<endl<<ans.second<<endl;
    }
}
