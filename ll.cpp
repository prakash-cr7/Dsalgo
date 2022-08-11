#include<bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left == right || !head->next) return head;
        vector<int> a;
        ListNode* curr = head;
        while(curr != NULL){
            a.push_back(curr->val);
            curr = curr->next;
        }
        while(left < right){
            int temp = a[left-1];
            a[left-1] = a[right-1];
            a[right-1] = temp;
            left++;
            right--;
        }
        ListNode* ans = new ListNode(a[0]);
        ListNode* ref = ans;
        for(int i=1; i<a.size(); i++){
            ListNode* temp = new ListNode(a[i]);
            ref->next = temp;
            ref = ref->next;
        }
        return ans;
    }
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currA = headA;
        int a = 1, b=1;
        ListNode *currB = headB;
        while(currA != NULL){
            a++;
            currA = currA->next;
        }
        while(currB != NULL){
            b++;
            currB = currB->next;
        }
        int dif = abs(a-b);
        ListNode* t;
        ListNode* s;
        if(a != b){
            max(a,b) == a ? t = headA : t = headB;
            min(a,b) == a ? s = headA : s = headB;
            for(int i=1; i<=dif; i++) t = t->next;
            while(t != NULL){
                if(t == s) return t;
                t = t->next;
                s = s->next;
            }
        }
        else {
            ListNode* p = headA;
            ListNode* q = headB;
            while(p != NULL){
                if(p == q) return p;
                p = p->next;
                q = q->next;
            }
        }
        return NULL;
    }
//print linked list
void print(ListNode* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main() {
    //create a linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);

    print(reverseBetween(head, 2, 5));
}
