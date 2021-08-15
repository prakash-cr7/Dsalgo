#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unordered_set<int> s1{};
        int a[4];
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        s1.insert(a[0]);
        s1.insert(a[1]);
        s1.insert(a[2]);
        s1.insert(a[3]);

        if (s1.size() >= 3)
            cout << 2 << endl;
        else if (s1.size() == 2){
            int c{};
            for (size_t i = 1; i < 4; i++)
            {
                if(a[0] == a[i]) c++;
            }
            if(c== 0 || c == 2) cout <<1<<endl;
            else cout<<2<<endl;
        }
        else
            cout << 0 << endl;
    }
}
// 1 3 2 1
// 1 1 2 2
// 1 2 1 2
// 1 1 1 2
