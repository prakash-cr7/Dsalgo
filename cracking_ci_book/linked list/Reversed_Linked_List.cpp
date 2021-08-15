#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    int n;
    cin >> n;
    Node *last = new Node(0);
    Node *head = last;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        Node *next = new Node(0);
        last->data = a;
        if (i != n - 1)
        {
            last->next = next;
            last = next;
        }
        else
            last->next = nullptr;
    }
    
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}