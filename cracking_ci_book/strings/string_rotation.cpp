#include<bits/stdc++.h>
using namespace std;

bool isSubstring(string s1, string s2){
    // returns true is s2 is substring of s1
}

bool otherSolution(string s1, string s2) {
    s2+=s2;
    return isSubstring(s2,s1);
}

int main() {
    string sa, sb;
    cin>>sa>>sb;
    if(sa.size() != sb.size()){
        cout<<"false";
        return 0;
    }
    for (size_t i = 0; i < sa.size(); i++)
    {
        if(sa == sb){
            cout<<"true";
            return 0;
        }
        sa += sa[0];
        sa.erase(sa.begin(), sa.begin() +1);
    }
    cout<<"false";
}