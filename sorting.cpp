#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& a){
    int n = a.size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]) swap(a[i],a[j]);
        }
    }
}

void mergeVector(vector<int> &a, int l, int m, int h){
    int n1 = m - l +1;
    int n2 = h - m;
    vector<int> a1;
    vector<int> a2;
    for(int i=l; i<=m; i++) a1.push_back(a[i]);
    for(int i=m+1; i<=h; i++) a2.push_back(a[i]);

    int i = 0, j = 0, k = l;

    while(i < n1 && j < n2){
        if(a1[i] <= a2[j]){
            a[k] = a1[i];
            i++;
            k++;
        }
        else {
            a[k] = a2[j];
            k++;
            j++;
        }
    }

    while(i < n1) {
        a[k] = a1[i];
        i++;
        k++;
    }
    while (j < n2){
        a[k] = a2[j];
        j++;
        k++;
    }   
}

void mergeSort(vector<int> &a, int l, int h){
    if(h > l){
        int m = l + (h-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,h);
        mergeVector(a,l,m,h);
    }
}

int main() {
    vector<int> a = {5,1,58,33,45};
    mergeSort(a,0,a.size()-1);
    for(auto x:  a) cout << x << " ";
}