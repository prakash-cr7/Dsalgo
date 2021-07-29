#include <bits/stdc++.h>
using namespace std;

bool is_permutation(string input1, string input2)
{
    if (input1.size() != input2.size())
    {
        return false;
    }
    unordered_map<char, bool> map2;
    for(int i=0; i<input2.size(); i++){
        map2[input2[i]] = true;
    }
    for(int i=0; i<input2.size(); i++){
        if(!map2[input1[i]]){
            return false;
        }
    }
    return true;
}


int main()
{
    string input1, input2;
    cout<<"Enter values: ";
    cin >> input1 >> input2;
    cout<<endl;
    cout << is_permutation(input1, input2);
}