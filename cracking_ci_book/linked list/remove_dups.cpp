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

    Node *head = new Node(6);
    Node *fi = new Node(7);
    Node *sc = new Node(5);
    Node *th = new Node(2);
    Node *fr = new Node(3);
    Node *fv = new Node(6);

    // 5
    // 6 7 5 2 3 6
    // 2 3 6 7 5 6

    head->next = fi;
    fi->next = sc;
    sc->next = th;
    th->next = fr;
    fr->next = fv;
    fv->next = nullptr;

    auto a = head->next;

    while (a != nullptr)
    {
        if( a->data < 5){
            Node *b = new Node(a->data);
            b->next = head;
            head = b;
            a->next = a->next->next;
            a->data = a->next->data;
        }
        a = a->next;
    }
}