#include <bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> st;
    queue<int> qe;

    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }

    for (int i=0; i < st.size(); i++){
        qe.push(st.top());
        st.pop();
    }

    for(int i=0; i<q.size(); i++) {
        qe.push(q.front());
        q.pop();
    }
    return qe;
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int t = 3;

}