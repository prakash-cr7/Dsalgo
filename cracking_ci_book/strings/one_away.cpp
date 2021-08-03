#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (b.size() > a.size() + 1 || b.size() < a.size() - 1)
    {
        cout << "false 0";
        return 0;
    }
    int edits{};
    if (b.size() == a.size() - 1)
    {
        for (size_t i = 0, j = 0; j < b.size(); i++, j++)
        {
            if (edits > 1)
            {
                cout << "false 1";
                return 0;
            }
            if (a[i] != b[j])
            {
                edits++;
                i++;
            }
        }
    }
    if (b.size() == a.size() + 1)
    {
        for (size_t i = 0, j = 0; j < b.size(); i++, j++)
        {
            if (edits > 1)
            {
                cout << "false 2";
                return 0;
            }
            if (a[i] != b[j])
            {
                edits++;
                j++;
            }
        }
    }
    if (b.size() == a.size())
    {
        for (size_t i = 0; i < a.size(); i++)
        {
            if (edits > 1)
            {
                cout << "false 3";
                return 0;
            }
            if (a[i] != b[i])
            {
                edits++;
            }
        }
    }
    cout << "true";
}