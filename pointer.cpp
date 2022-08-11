#include<bits/stdc++.h>
using namespace std;

int main(){

    int *a = (int *)malloc(10);
   
    for(int i=0; i<20; i++){
        a[i] = i;
    }
    for(int i=0; i<20; i++){
        cout << a[i] << " ";
    }
  
}