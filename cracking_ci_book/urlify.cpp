#include <bits/stdc++.h>
#include<sstream>
using namespace std;

//%20
string urlify(string input, size_t trueLength) {
    
    size_t spaces = input.size() - trueLength;
    if(spaces == 0){
        return input;
    }
    size_t last_position = trueLength -1;
    size_t pointer = input.size() - 1;
    for (size_t i = trueLength-1; i >= 0; i--)
    {
        if(input[i] = ' '){
            for(int j = last_position; j>i; j--){
                input[pointer] = input[j];
                pointer--;
            }
            input[pointer] = '0';
            pointer--;
            input[pointer] = '2';
            pointer--;
            input[pointer] = '%';
            pointer--;
            last_position = i-1;
        }
    }
    return input;
}

int main() {
    string input;
    int trueLength;
    getline(cin, input);
    cin>>trueLength;

    cout<<urlify(input, trueLength);
}

// prakash kumar raj
// prakash kumar%20raj
//12 - 7