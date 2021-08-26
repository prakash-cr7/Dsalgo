#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int both{},onlyS{},onlyT{},none{};
        for (size_t i = 0; i < n; i++)
        {
            if(s[i] == '1' && t[i] == '1' ) both++;
            else if(s[i] == '1' && t[i] == '0') onlyS++;
            else if(s[i] == '0' && t[i] == '1') onlyT++;
            else none++;
        }
        int count{};

        //pair both with none
        count += min(both, none);

        // remaining both
        both -= min(both, none);

        //pair only with each other
        count += min(onlyT, onlyS);

        //pair remaining only and both
        count += min(both, (max(onlyS,onlyT) - min(onlyT,onlyS)));

        both-= min(both, (max(onlyS,onlyT) - min(onlyT,onlyS)));

        count+= (both/2);
        
        cout<<count<<endl;
    }
}