#include<bits/stdc++.h>
using namespace std;


// singly linked list
// insert- delete - display - reverse function
// reverse k nodes

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};
void insertHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
void deleteHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deleteNode(node* &head, int val){
    if(head == NULL)
        return;
    if(head->next == NULL){
        delete head;    
        return;
    }

    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void insertTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void displayllist(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
//iterative approach
node* reversed(node* &head){
    node* prev = NULL;
    node* current = head;
    node* nextptr;

    while(current != NULL){
        nextptr = current->next;
        current->next = prev;
    
        prev = current;
        current = nextptr;
    }
    return prev;
}
// recursive approach
node* revRecurse(node* &head){
    if(head == NULL or head->next == NULL)
        return head;

    node* newhead = revRecurse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

//recurisve approach to reverse k nodes
node* reverseKnodes(node* &head, int k){
    if(head == NULL or k == 1)
        return head;

    node* preptr = NULL;
    node* currentptr = head;
    node* nextptr;

    int count = 0;

    while(currentptr != NULL and count < k){
        nextptr = currentptr->next;
        currentptr->next = preptr;
        preptr = currentptr;
        currentptr = nextptr;
        count++;
    }
    if(nextptr != NULL)
        head->next = reverseKnodes(nextptr,k);
    
    return preptr;
}

int main(){
    node* head = NULL;

    insertTail(head,6);
    insertTail(head,7);
    insertHead(head,5);
    insertHead(head,4);
    insertHead(head,3);
    displayllist(head);
    int k;
    cout << "Reverse nodes k :: ";
    cin >> k;
    node* newhead = reverseKnodes(head,k);
    displayllist(newhead);

    return 0;
}