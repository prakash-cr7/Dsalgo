#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t t;
    cin>>t;
    while (t--)
    {
        size_t len;
        string input;
        cin>>len>>input;
        string temp;
        temp = input;
        sort(temp.begin(), temp.end());
        int count{};
        for (size_t i = 0; i < temp.size(); i++)
        {
            if(temp[i] != input[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}

// 6 4 7 3 8 5 3
// 3 3 4 5 6 7 8