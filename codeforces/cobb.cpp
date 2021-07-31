// You are given n integers a1,a2,…,an and an integer k. Find the maximum value of i⋅j−k⋅(ai|aj) over all pairs (i,j) of integers with 1≤i<j≤n. Here, | is the bitwise OR operator.

// Input
// The first line contains a single integer t (1≤t≤10000)  — the number of test cases.

// The first line of each test case contains two integers n (2≤n≤105) and k (1≤k≤min(n,100)).

// The second line of each test case contains n integers a1,a2,…,an (0≤ai≤n).

// It is guaranteed that the sum of n over all test cases doesn't exceed 3⋅105.

// Output
// For each test case, print a single integer  — the maximum possible value of i⋅j−k⋅(ai|aj).
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 5, b = 3;
    auto c = a | b;
    cout<< c;
}