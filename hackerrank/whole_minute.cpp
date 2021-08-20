#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> songs = {20, 30, 40 , 50 ,60, 70, 80, 90 ,100};
    unordered_map<int, bool> m {};
    unordered_set<int> s {};
    int max = songs[0];
    for (size_t i = 0; i < songs.size(); i++)
    {
        m[songs[i]] = true;
        if(songs[i] > max) max = songs[i];
    }
    for (size_t i = 0; i < songs.size(); i++)
    {
        int r = 60 - (songs[i] % 60);
        while (r <= max)
        {
            if(m[r] && r != songs[i]) s.emplace(songs[i] * r);
            r+=60;
        }        
    }
    cout<<s.size();
}