// CPP program to find infix for
// a given postfix.
#include <bits/stdc++.h>
using namespace std;

int M = 1e5;
    int solve(int i, int j, int currMax, int n, int k, vector<int>&job, vector<vector<vector<int>>> &dp){
        
        if(i == n-1 && j == k) return currMax;
        if(i >= n || j > k) return M;
        
        if(dp[i][j][currMax] != -1) return dp[i][j][currMax];
        
        int inc = solve(i+1,j, max(currMax,job[i+1]), n,k,job,dp);
        int exc = currMax + solve(i+1,j+1,job[i+1],n,k,job,dp);
        return dp[i][j][currMax] = min(inc,exc);
    }
    int minDifficulty(vector<int>& job, int d) {
        int n = job.size();
        if(n < d) return -1;
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(d+1, vector<int>(1001,-1)));
        return solve(0,1,job[0],n,d,job,dp);
    }

int main(){
	vector<int> j = {11,111,22,222,323,343,444,44};
	cout << minDifficulty(j,6);
}