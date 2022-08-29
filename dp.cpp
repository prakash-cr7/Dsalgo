#include <bits/stdc++.h>
using namespace std;

int fibo(int n, vector<int> &dp)
{
    if (dp[n] == -1)
    {
        if (n == 0 || n == 1)
            return n;
        int x = fibo(n - 1, dp) + fibo(n - 2, dp);
        dp[n] = x;
        return x;
    }
    else
        return dp[n];
}

int lcs(string s1, string s2, int m, int n, vector<vector<int>> &dp){
    if(dp[m][n] != -1) return dp[m][n];
        if(m == 0 || n == 0) {
            dp[m][n] = 0;
        }
        else if(s1[m-1] == s2[n-1]) {
            dp[m][n] = lcs(s1,s2,m-1,n-1,dp) + 1;
        }
        else {
            dp[m][n] = max(lcs(s1,s2,m-1,n,dp), lcs(s1,s2,m,n-1,dp));
        }
        return dp[m][n];
}

string lcsString(string &s1, string &s2, int m, int n, vector<vector<string>> &dp , string ans = ""){
    if(dp[m][n] != "$") return dp[m][n]; 
    if(m == 0 || n == 0) return dp[m][n] = ans;
    if(s1[m-1] == s2[n-1]) return dp[m][n] = lcsString(s1,s2,m-1,n-1,dp) + s1[m-1];
    string p = lcsString(s1,s2,m-1,n,dp);
    string q = lcsString(s1,s2,m,n-1,dp);
    if(p.size() > q.size()) return dp[m][n] = ans+p;
    else return dp[m][n] = ans+q;
}

int coinChange(vector<int> &coins, int k, int n, vector<vector<int>> &dp){
    if(dp[k][n] != -1) return dp[k][n];
    if(k == 0) return dp[k][n] = 1;
    if(n == 0) return dp[k][n] = 0;
    int res = coinChange(coins, k, n-1, dp);
    if(coins[n-1] <= k) res += coinChange(coins, k-coins[n-1], n, dp);
    return dp[k][n] = res;
}

int editDistance(string s1, string s2, int m, int n){
    if(m == 0 ) return n;
    if(n == 0 ) return m;
    if(s1[m-1] == s2[n-1]) return editDistance(s1,s2,m-1,n-1);
    return min(editDistance(s1,s2,m,n-1), min(editDistance(s1,s2,m-1,n),editDistance(s1,s2,m-1,n-1))) + 1;
}

int lis(vector<int> &a, int n){
    int l[n];
    l[0] = 1;
    for(int i=1; i<n; i++){
        int m = 1;
        for(int j=0; j<=i; j++){
            if(a[j] < a[i]) m = max(m,l[j]+1);
        }
        l[i] = m;
    }
    int ans = l[0];
    for(int i=1; i<n; i++) ans = max(ans,l[i]);
    return ans;
}

int maxSumIS(int arr[], int n)  
	{  
	    int l[n];
	    l[0] = arr[0];
	    for(int i=1; i<n; i++){
	        int curr = arr[i];
	        for(int j=0; j<i; j++){
	            if(arr[j] < arr[i]) curr = max(curr,l[j]+arr[i]);
	        }
	        l[i] = curr;
	    }
	    int ans = arr[0];
	    for(int i=0; i<n; i++) ans = max(ans,l[i]);
	    return ans;
	}  

int coinChange(vector<int> coins, int k, int i=0){
    if(k == 0) return 0;
    int a = INT_MAX, b = INT_MAX;
    if(k-coins[i] >=0 ) a = coinChange(coins,k-coins[i],i);
    else b = coinChange(coins,k-coins[i+1],i+1);
    return min(a,b)+1;
}

int main()
{
    string s1 = "intention", s2 = "execution";
    vector<vector<int>> dp(305, vector<int>(5003, -1));
    vector<int> a = {13,1,5};
    int k = 11;
    cout << coinChange(a,k);
}
