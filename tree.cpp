#include <bits/stdc++.h>
using namespace std;

class Tree
{
    public:
    Tree* right;
    Tree* left;

    int value;
    Tree(int value)
    {
        this->value = value;
        right = nullptr;
        left = nullptr;
    }
};

void inOrder(Tree* root)
{
    if (root == nullptr)
        return;
    inOrder(root->left);
    cout << root->value << " ";
    inOrder(root->right);
}

int height(Tree *root){
    if(root == nullptr) return 0;
    int a = max(height(root->left), height(root->right)) + 1;
    cout << root->value << " " << a << endl;
    return a;
}

void atHeightK(Tree *root, int k, int i=0){
    if(root == nullptr) {
        return;
    }

    if(i == k) {
        cout << root->value << endl;
        return;
    }

    atHeightK(root->left, k, i+1);
    atHeightK(root->right, k, i+1);

}

void bfs(Tree *root) {
    if(root == NULL) return;
    queue<Tree*> q;
    q.emplace(root);

    while (q.empty() == false) {
        int s = q.size();
        for(int i=0; i<s; i++){
            Tree* curr = q.front();
            q.pop();
            cout << curr->value << " ";
            if(curr->left != NULL) q.emplace(curr->left);
            if(curr->right != NULL) q.emplace(curr->right);
        }
        cout << "\n";   
    }
}

int size(Tree* root){
    if(root == NULL) return 0;
    return size(root->left) + size(root->right) + 1;
}



int maxValue(Tree* root, int m = INT_MIN){
    if(root == NULL) return -1;

    if(root->left == NULL && root->right == NULL) return max(root->value, m);

    return max(maxValue(root->left, max(root->value, m)), maxValue(root->right, max(root->value, m)));
}

int mValue(Tree* root){
    if(root == NULL) return INT_MIN;
    return max(root->value, max(mValue(root->left), mValue(root->right)));
}

void leftView(Tree* root){
    if(root == NULL) return;
    queue<Tree*> q;
    q.emplace(root);
    int a;
    while(q.empty() == false){
        int s = q.size();
        for(int i=0; i<s; i++){
            if(i == 0) a=q.front()->value;
            Tree* f = q.front();
            q.pop();
            if(f->right != NULL) q.emplace(f->left);
            if(f->right!= NULL) q.emplace(f->right);
        }
        cout << a << " ";
    }
}

/*
                1
           2           3
        4    5      6      7
      8  9 10  11
*/

bool childrenSum(Tree* root, int ans = true){
    if(root == NULL) return ans;

    if(root->left == NULL && root->right == NULL) return ans;

    int s = 0;
    if(root->left != NULL) s+=root->left->value;
    if(root->right != NULL) s+=root->right->value;
    
    ans = s == root->value;

    return ans && childrenSum(root->left) && childrenSum(root->right);
}
int h(Tree* root){
    if(root == NULL) return 0;
    return max(h(root->left), h(root->right)) + 1;
}

bool balancedTree(Tree* root){
    if(root == NULL) return true;

    bool ans = abs(h(root->right) - h(root->left)) > 1 ? false : true;
    return ans && balancedTree(root->left) && balancedTree(root->right); 
}

int balacnedOpt(Tree* root){
    if(root == NULL) return 0;

    int l = balacnedOpt(root->left);
    if(l == -1) return -1;
    int r = balacnedOpt(root->right);
    if(r == -1) return -1;
    if(abs(r-l) > 1) return -1;
    return max(l,r)+1;
}

int maxWidth(Tree* root){
    if(root == NULL) return 0;
    queue<Tree*> q;
    q.emplace(root);
    int ans = -1;
    while(q.empty() == false){
        int s = q.size();
        ans = max(ans,s);
        for(int i=0; i<s; i++){
            Tree* top = q.front();
            q.pop();
            if(top->left != NULL) q.emplace(top->left);
            if(top->right != NULL) q.emplace(top->right);
        }
    }
    return ans;
}


Tree* toDll(Tree* root, Tree* prev = NULL){
    if(root == NULL) return root;

    Tree* head;
    toDll(root->left, prev);
    if(prev == NULL) head = root;
    else {
        prev->right = root;
        root->left = prev;
    }
    prev = root;
    toDll(root->right, prev);
    return head;
}

bool hasLeft(Tree* root, int k){
    if(root == NULL) return false;

    bool ans = true;
    if(k == 0){
        ans = root->left != NULL;
        return ans;
    }
    return ans && hasLeft(root->left, k-1) && hasLeft(root->right, k-1);
}
int xyz = INT_MIN;
int diameter(Tree *root){
    if(root == NULL) return 0;
    int l = diameter(root->left);
    int r = diameter(root->right);
    xyz = max(xyz, (l+r+1));
    return max(l,r)+1;
}

void inOrderItr(Tree *root){
    stack<Tree*> s;
    Tree *curr = root;
    while(curr != NULL || s.empty() == false){
        while(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->value << " ";
        curr = curr->right;
    }
}

void preItr(Tree* root){
    stack<Tree*> s;
    Tree *curr = root;
    while(curr != NULL || s.empty() == false){
        while(curr != NULL){
            cout << curr->value << " ";
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        curr = curr->right;
    }
}

int main(){
    Tree* root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);
    root->left->left = new Tree(4);
    root->left->right = new Tree(5);
    root->right->left = new Tree(6);
    root->right->right = new Tree(7);
    root->left->left->left = new Tree(8);
    root->left->left->right = new Tree(9);
    root->left->right->left = new Tree(10);
    root->left->right->right = new Tree(11);

    preItr(root);

}

/*
                1
           2           3
        4    5      6      7
      8  9 10  11
*/