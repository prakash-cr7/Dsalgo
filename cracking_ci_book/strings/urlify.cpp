#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main()
{
    string input;
    int trueLength;
    getline(cin, input);
    cin >> trueLength;
    size_t pointer = input.size() - 1;
    for (size_t i = trueLength - 1; i >= 0; i--)
    {
        if (input[i] != ' ')
        {
            input[pointer] = input[i];
            pointer--;
        }
        else
        {
            input[pointer - 2] = '%';
            input[pointer - 1] = '2';
            input[pointer] = '0';
            pointer = pointer - 2;
        }
    }
    cout<<input<<endl;
}
