#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node* up;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

bool find(Node* root, Node* x){
    if(root == NULL) return false;
    if(root == x) return true;
    return find(root->left, x) || find(root->right, x);
}

Node* ca(Node* root, Node* p, Node* q) {
    if(root == NULL || root == p || root == q) return root;
    bool pInLeft = find(root->left, p);
    bool qInLeft = find(root->left, q);
    if(pInLeft != qInLeft) {
        return root;
    }
    Node* child = pInLeft ? root->left : root->right;
    ca(child, p, q);
    return NULL;
}



int main(){
    // crate a binary tree with 10 nodes
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(8);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(7);
    root->right->right = new Node(9);
    root->left->left->left = new Node(1);
    root->right->right->right = new Node(10);

    Node* ans = ca(root, root, root->left->left->left);
    cout<<ans->data<<" ";
}

/*
            5
        3       8
     2     4 7      9
1                       10
*/