#include<bits/stdc++.h>
using namespace std;

static bool s(vector<int> a1, vector<int> a2){
    return a1[1] < a2[1];
}

vector<vector<int>> merge(vector<vector<int>>& a) {
    sort(a.begin(), a.end(), s);
    vector<vector<int>> ans;
    int n = a.size();
    int begin = a[0][0];
    int end = a[0][1];
    for(int i=1; i<n; i++){
        if(a[i][0] <= end ){
            end = a[i][1];
            begin = min(begin,a[i][0]);
        }
        else {
            ans.push_back({begin,end});
            begin = a[i][0];
            end = a[i][1];
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> a = {{1,4},{8,10},{9,18},{2,3}};
    merge(a);
}