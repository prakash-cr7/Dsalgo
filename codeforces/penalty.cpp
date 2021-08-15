#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int evenFavor(string s)
{
    int oddGoal{}, evenGoal{};
    int oddRemaining = 5;
    for (size_t i = 0; i < 10; i++)
    {
        if (i % 2 == 0 && s[i] == '?')
           { s[i] = '1'; }
        if (i % 2 == 1 && s[i] == '?')
           { s[i] = '0'; }
    }
    for (size_t i = 0; i < 10; i++)
    {
        if (i % 2 == 0 && s[i] == '1')
            evenGoal++;
        if (i % 2 == 1) {
            oddRemaining--;
            if(s[i] == '1') oddGoal++;      
        }
        if(evenGoal > oddGoal + oddRemaining) return i+1;
    } 
    return 10;
}

int oddFavor(string s)
{
    int oddGoal{}, evenGoal{};
    int evenRemaining = 5;
    for (size_t i = 0; i < 10; i++)
    {
        if (i % 2 == 0 && s[i] == '?')
            s[i] = '0';
        if (i % 2 == 1 && s[i] == '?')
            s[i] = '1';
    }
    for (size_t i = 0; i < 10; i++)
    {
        if (i % 2 == 1 && s[i] == '1')
            oddGoal++;
        if (i % 2 == 0) {
            evenRemaining--;
            if(s[i] == '1') evenGoal++;      
        }
        if(oddGoal > evenGoal + evenRemaining) return i+1;
    } 
    return 10;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    int count{};
    while (t--)
    {
        string s;
        cin >> s;
        cout << min(evenFavor(s), oddFavor(s)) << endl;
    }
}

// 0 1 2 3 4 5 6 7 8 9