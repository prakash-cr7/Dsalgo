#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


int main() {

    Node *first = new Node(0);
    Node *second = new Node(1);
    Node *third = new Node(3);


    first->next = second;
    second->next = third;
    third->next = NULL;

    Node* insert = new Node(2);

    second->next = insert;
    insert->next = third;

    while (first != NULL)
    {
        cout<<first->data<<endl;
        first = first->next;
    }
    
}

