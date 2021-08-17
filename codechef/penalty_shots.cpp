#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        int a[n];
        // value -> key, score-> value
        vector<pair<int, int>> score;
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
            int temp = i+1;
            score.push_back(make_pair(a[i], temp));
        }
        sort(score.begin(), score.end());
        int temp = -1;
        for (size_t i = 0; i < n; i++)
        {
            if(score[i].first >= m){
                if(n - i < x){
                    temp = i - (x- (n - i));
                    break;
                }
                else temp = i;
                break;
            }
        }
        if(temp == -1) {
            cout<<x<<" ";
            temp = n-x;
        }else cout<<n-temp<<" ";
        vector<int> index;
        for (size_t i = temp; i < n; i++)
        {
            index.push_back(score[i].second);
        }
        sort(index.begin(), index.end());
        for(auto x: index){
            cout<<x<<" ";}
        cout<<endl; 
    }
}
