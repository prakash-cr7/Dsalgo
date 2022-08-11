#include<bits/stdc++.h>
using namespace std;

void powerSet(string s, int i=0, string r = "$"){
    if(s.size() == i){
        cout << r << " ";
        return;
    }
    powerSet(s, i+1, r+s[i]);
    powerSet(s,i+1,r);
}

void powerSetInt(vector<int> a, int i=0, vector<int> r = {}){
    if(a.size() == i){
        for(int j=0; j<r.size(); j++) cout<<r[j] << " ";
        cout<< endl;
        return;
    }
    powerSetInt(a,i+1,r);
    r.push_back(a[i]);
    powerSetInt(a,i+1,r);
}

void permutation(string s, int i=0){
    if(i == s.size()){
        cout << s << " ";
        return;
    }
    for(int j=0; j<=i; j++){
        swap(s[i],s[j]);
        permutation(s,i+1);
        swap(s[i],s[j]);
    }
}

void permutaionInt(vector<int> a, int i=0){
    if(a.size() == i){
        for(int j=0; j<i; j++) cout << a[j];
        cout << endl;
        return;
    }
    for(int j=0; j<=i; j++){
        swap(a[i],a[j]);
        permutaionInt(a,i+1);
        swap(a[i],a[j]);
    }
}

int subSetSum(vector<int> a, int sum, int i=0,int s = 0){
    if(a.size() == i){
        if(s == sum) return 1;
        else return 0;
    }
    return subSetSum(a,sum,i+1,s+a[i]) + subSetSum(a,sum,i+1,s);
}


void ropeCut(int n, int a, int b, int c, int &ans , int cut = 0){
    if(n < 0) return;
    if(n == 0) ans = max(ans,cut);
    ropeCut(n-a,a,b,c,ans,cut+1);
    ropeCut(n-b,a,b,c,ans,cut+1);
    ropeCut(n-c,a,b,c,ans,cut+1);
}

bool isSafe(int i, int j, int n,vector<vector<int>> &a){
    if(i < n && j < n && a[i][j] == 1) return true;
    else return false;
}

//how does this goes up or left in the matrix ?
bool ratInAMaze(vector<vector<int>> &a, int n, int i=0, int j =0){
    if(i == n-1 && j == n-1){
        return true;
    }
    if(isSafe(i,j,n,a)){
        if(ratInAMaze(a,n,i+1,j)) return true;
        else if(ratInAMaze(a,n,i,j+1)) return true;
        else return false;
    }
    return false;
}



int main(){
    vector<vector<int>> a = {
         {1, 0, 0, 0, 0, 0},
         {1, 1, 1, 1, 0, 0}, 
         {0, 0, 0, 1, 0, 0},
         {0, 0, 1, 1, 0, 0},
         {1, 0, 1, 0, 0, 0},
         {1, 0, 1, 1, 1, 1},
         };
    cout << ratInAMaze(a,4);
}