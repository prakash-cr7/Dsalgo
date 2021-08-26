#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast();
    int t=1;
    cin>>t;
    while(t--)
    {   
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(n<=2){
            cout<<"0\n";
            continue;
        }
        sort(a,a+n);
        int temp=1,ans=2;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1]) temp++;
            else temp=1;
            ans=max(ans,temp);
        }
        
        cout<<(n-ans)<<"\n";
    }
    return 0;
}