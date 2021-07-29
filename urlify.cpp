#include <bits/stdc++.h>
using namespace std;

string urlify(string input, size_t trueLength) {
    
    size_t spaces = input.size() - trueLength;
    if(spaces == 0){
        return input;
    }
    
}

int main() {
    string input;
    size_t trueLength;

    cin>>input>>trueLength;
    cout<<urlify(input, trueLength);
}