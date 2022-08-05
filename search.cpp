#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int begin, int end, int k){
    if(begin > end) return -1;

    int mid = (begin+end)/2;

    if(a[mid] == k) return mid;

    if(k > a[mid]) return binarySearch(a,mid+1,end,k);
    else return binarySearch(a,begin,mid-1,k);
}

int countK(int a[], int n, int k){
    int i = binarySearch(a,0,n-1,k);
    if(i == -1) return -1;
    int begin = i;
    int end = i;
    while(end != n-1 && a[end] == a[end+1]){
        end = binarySearch(a,end+1,n-1,k);
    }
    while(begin != 0 && a[begin] == a[begin-1]){
        begin = binarySearch(a,0,begin-1,k);
    }
    cout << begin << " " << end << endl;
    return end-begin+1;
}

int squareRoot(int n){
   if(n == 0 || n == 1) return n;
    int i = n;
    int j = 1;
    int ans = -1;
    while(j <= i)
    {
        int mid = (i+j)/2;
        if(mid * mid == n) return mid;
        else if(mid * mid > n) i = mid-1;
        else{ 
            j = mid+1;
            ans = mid;
        }
    }
    return ans;  
}

int peak(vector<int> a){
    int n = a.size();
    if((n > 1 && a[0] >= a[1] ) || n == 1) return 0; 
    if(n > 1 && a[n-1] >= a[n-2]) return n-1;
    long long int begin = 0, end = n-1;
    long long int mid = (begin+end)/2;
    while(end >= begin) {
        if(mid == 0 && a[0] > a[1]) return 0;
        if(mid == n-1 && a[n-1] > a[n-2]) return n-1;
        if(a[mid] >= a[mid-1] && a[mid] >= a[mid+1]) return mid;
        else if(mid != 0 && a[mid-1] > a[mid]) end = mid-1;
        else if(mid != n-1 && a[mid+1] > a[mid]) begin = mid+1;
        mid = (begin+end)/2;
    }
    return -1;
}

vector<vector<int>> tripleSum(vector<int> a, int k){
    a.erase(unique(a.begin(), a.end()), a.end());
    int n = a.size();
    unordered_map<int, int> am{};
    for(int i=0; i<n; i++){
        am[a[i]] = i+1;
    }
    set<vector<int>> ans;
    for(int i=0; i<n-2; i++){
        int x = k-a[i];
        for(int j=i+1; j<n-1; j++){
            vector<int> temp;
            int y = x-a[j];
            if(am[y] > j+1) {
                 temp.push_back(a[i]);
                 temp.push_back(a[j]);
                 temp.push_back(y);
                 sort(temp.begin(), temp.end());
                 ans.emplace(temp);
            }
        }
    }
    vector<vector<int>> p;
    for(auto x: ans){
        vector<int> q;
        for(auto y: x){
            q.push_back(y);
        }
        p.push_back(q);
    }
    return p;
}

vector<vector<int>> threeSome(vector<int> a){
    sort(a.begin(), a.end());
    int k = 0;
    int n = a.size();
    vector<vector<int>> ans;
    for(int i=0; i<n-2; i++){
        if(i == 0 || (a[i] != a[i-1])){
            int low = 1;
            int high = n-1;
            int x = k-a[i];
            while(high > low) {
                if(a[high] + a[low] == x) {
                    ans.push_back({a[i], a[low], a[high]});
                    while(high > low && a[low] == a[low+1]) low++;
                    while(high > low && a[high] == a[high-1]) high--;
                    low++;
                    high--;  
                }
                else if(a[high] + a[low] > x) high--;
                else low++;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> a = {-1,0,1,2,-1,-4};
    // mid 4 2 3
    // b 0 0 3
    // e 9 3 3
     tripleSum(a,0);
}