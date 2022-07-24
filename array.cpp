#include <bits/stdc++.h>
using namespace std;

void rotateArr(int arr[], int d, int n)
{
    int a[d];
    for (int i = 0; i < d; i++)
        a[i] = arr[i];
    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];
    for (int i = 0; i < d; i++)
        arr[n - d + i] = a[i];
}

int maxDiff(int arr[], int n)
{
    int ans = arr[1] - arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        int t = arr[i] - min;
        if (t > ans)
            ans = t;
        if (arr[i] < min)
            min = arr[i];
    }
    return ans;
}
int maxProfit(int a[], int start, int end){
    if( start>= end) return 0;
    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i+1; j <= end; j++)
        {
            if(a[j] > a[i]) {
                int curr_profit = a[j] - a[i] + maxProfit(a, start, i-1) + maxProfit(a, j+1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

int maxProfit1(int a[], int n){
    int buy = a[0];
    int sell = a[0];
    int profit = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i+1] > a[i]){
            sell = a[i+1];
            profit += sell-buy;
            buy = a[i+1];
        } else {
            buy = a[i+1];
        }
    }
    return profit;
}

int trappingWater(int a[], int n){
    int ans = 0;
    for (int i = 1; i < n-1; i++)
    {
        int lmax = 0;
        for (int j = i-1; j >= 0; j--)
        {
            if(a[j] > lmax) lmax = a[j];
        }
        int rmax = 0;
        for(int j=i+1; j<n; j++){
            if(a[j] > rmax) rmax = a[j];
        }
        ans += max(0, (min(rmax, lmax)- a[i]));
    }
    return ans;
}

int trappingWater1(int a[], int n){
    unordered_map<int, int> leftMax;
    unordered_map<int, int> rightMax;
    int lmax = a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i-1] > lmax) lmax = a[i-1];
        leftMax[i] = lmax;
    }
    int rmax = a[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        if(a[i+1] > rmax) rmax = a[i+1];
        rightMax[i] = rmax;
    }
    int ans = 0;
    for (int i = 1; i < n-1; i++)
    {
        ans+= max(0, (min(leftMax[i], rightMax[i]) - a[i]));
    }
    return ans;
}

int maxOnes(int a[], int n){
    int ans = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 1) count++;
        else {
            ans = max(ans, count);
            count = 0;
        }
    }
    return ans;
}

int maxSubarray(int a[], int n){
    int maximum = a[0];
    int minimum = a[0];
    for(int i=0; i<n; i++){
        maximum = max(a[i], maximum);
        minimum = min(a[i], minimum);
    }
    if(maximum < 0) return maximum;

    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(sum + a[i] < 0) {
            sum = 0;
        } else {
            sum+=a[i];
            ans = max(ans, sum);
        }
    }
    return ans;
}


int maxEOsubarray(int a[], int n){
    int ans = 1;
    int count = 1;
    bool lastIsEven = a[0] % 2 == 0 ? true : false;
    for(int i=1; i<n; i++){
        if( (lastIsEven ^ a[i] % 2 == 0) ){
            lastIsEven = a[i] % 2 == 0 ? true : false;
            count+=1;
            ans = max(ans, count);
        } else {
            lastIsEven = a[i] % 2 == 0 ? true : false;
            count = 1;
        }
    }
    return ans;
}

int majorityElement(vector<int>& nums) {
        int s = nums.size()/2;
        unordered_map<int, int> freq{};
        for(int n: nums) freq[n]++;
        for(auto f: freq) {
            if(f.second > s) return f.first;
        }
        return -1;
    }

int KmaxSumSubarray(int a[], int n ,int k){
    int x[n];
    x[0] = a[0];
    for(int i=1; i<n; i++){
        x[i] = x[i-1] + a[i];
    }
    int ans = x[k-1];
    for(int i=k; i<n; i++){
        int curr = x[i] - x[i-k];
        ans = max(ans, curr);
    }
    return ans;
}

// subarray with a given sum
void subarraySumEquals(int a[], int n, int k){
    int sum = 0;
    int begin = 0;
    for(int i=0; i<n; i++){
        if(sum+a[i] > k){
            while (sum+a[i] > k)
            {
                sum-=a[begin];
                begin++;
            }
        } 
        if(sum+a[i] == k) {
            cout << begin +1 << " " << i+1;
            return;
        }
        if(sum+a[i] < k){
            sum+=a[i];
        }
    }
}

//no of subarray whose sum is equals k
//n0t done
int subSumEquals(int a[], int n, int k){
    unordered_map<int, int> prefixSum {};
    prefixSum[a[0]] = true;
    for(int i=1; i<n; i++) {
        a[i] = a[i] + a[i-1];
        prefixSum[a[i]]++;
    }
    int count = prefixSum[k];
    cout << count << endl;
    for(int i=0; i<n; i++){
        if(prefixSum[a[i] + k] > 0) count++;
    }
    return count;
}

int main()
{
    int a[11] = {4, 5, 2, 8, 3, 4, 9, 20, 9, -2, 7};
    //
    int b[6] = {1,2,3,-3,5,-3};
    // 1 3 6 3 8 5

    // 3 + 5 + 4 
    cout << subSumEquals(b,6,2);
} 