// CPP program to find infix for
// a given postfix.
#include <bits/stdc++.h>
using namespace std;

int solve(string s, string key){
	unordered_map<char, vector<int>> m;
	int x = 0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			m[key[x]] = {j,i};
			x++;
		}
	}
	int ans = 0;
	int n = s.size();
	for(int i=1; i<n; i++){
		auto prev = m[s[i-1]];
		auto curr = m[s[i]];
		ans += max(abs(prev[0] - curr[0]), abs(prev[1] - curr[1]));
	}
	return ans;
}

// int M = 1e5;
//     int solve(int i, int j, int currMax, int n, int k, vector<int>&job, vector<vector<vector<int>>> &dp){
        
//         if(i == n-1 && j == k) return currMax;
//         if(i >= n || j > k) return M;
        
//         if(dp[i][j][currMax] != -1) return dp[i][j][currMax];
        
//         int inc = solve(i+1,j, max(currMax,job[i+1]), n,k,job,dp);
//         int exc = currMax + solve(i+1,j+1,job[i+1],n,k,job,dp);
//         return dp[i][j][currMax] = min(inc,exc);
//     }
//     int minDifficulty(vector<int>& job, int d) {
//         int n = job.size();
//         if(n < d) return -1;
//         vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(d+1, vector<int>(1001,-1)));
//         return solve(0,1,job[0],n,d,job,dp);
//     }

int main(){
	string s = "91566165";
	string key = "639485712";
	cout << solve(s,key);
}