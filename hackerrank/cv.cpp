#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
    int a[steps];
    int count {};
    for (int i=0; i<steps; i++) {
        if(path[i] == 'U') a[i] = 1;
        else a[i] = -1;
    }
    for (int i=1; i<steps; i++) {
        a[i] = a[i] + a[i-1];
    }
    for (int i=0; i<steps; i++) {
        if(a[i] == -1) {
            for (int j=i+1; j<steps; j++) {
                if(a[j] == 0) {
                    count++;
                    i=j;
                    break;
                }
            }
        }
    }
    for (size_t i = 0; i < steps; i++)
    {
        cout<<a[i];
    }
    cout<<" "<<count;
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string steps_temp;
    getline(cin, steps_temp);

    int steps = stoi(ltrim(rtrim(steps_temp)));

    string path;
    getline(cin, path);

    int result = countingValleys(steps, path);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
