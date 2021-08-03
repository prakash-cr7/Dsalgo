#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> sMap{};
    int count{};
    for (char c : s)
    {
        sMap[c]++;
    }
    if (s.size() % 2 == 0)
    {
        for (auto i : sMap)
        {
            if (i.second % 2 != 0)
            {
                cout << "False" << endl;
                return 0;
            }
        }
    }
    else
    {
        for (auto i : sMap)
        {
            if (count > 1)
            {
                cout << "False" << endl;
                return 0;
            }
            if (i.second % 2 != 0)
            {
                count++;
            }
        }
    }
    cout<<"true"<<endl;   
}

// caababaac