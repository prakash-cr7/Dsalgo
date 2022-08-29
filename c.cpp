#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> a;
     unordered_map<int, int> m {};
        for(int i=0; i<nums.size(); i++){
            int temp = i+1;
            m[nums[i]] = temp;
        } 
        for(int i=0; i<nums.size(); i++){
            int temp = target-nums[i];
            if(m[temp] > i+1) {
                a.push_back(nums[i]);
                a.push_back(temp);
                break;
            }
        }
        return a;
} 

vector<int> cSort(vector<int> a){
    int n = a.size();
    vector<pair<int,int>> s;
    for(int i=0; i<n; i++){
        int count = 0;
        while(a[i]){
            count += a[i]%2;
            a[0]/=2;
        }
        s.push_back({count,a[i]});
    }
    sort(s.begin(), s.end());
    vector<int> ans;
    for(int i=0; i<n; i++) ans.push_back(s[i].second);
    return ans;
}

int lis(vector<int> a){
    int n = a.size();
    int l[n];
    l[0] = 1;
    for(int i=1; i<n; i++){
        int x = 1;
        for(int j=0; j<i; j++){
            if(a[j] < a[i]) x = max(x,l[j]+1);
        }
        l[i] = x;
    }
    int ans = l[0];
    for(int i=0; i<n; i++) ans = max(ans,l[i]);
    return ans;
}

static bool s(vector<int> a, vector<int> b){
    return a[0] < b[0];
}

int solve(vector<int> wait, vector<int> buy) {
    int n = wait.size();
    vector<vector<int>> a;
    for(int i=0; i<n; i++){
        a.push_back({buy[i], wait[i]});
    }
    sort(a.begin(), a.end(), s);
    int ans = 0;
}


int main(){

    vector<int> wait = {2,1,3,9,7,12,13};
    vector<int> buy = {1,3,6,9,2,3,1,3};
}