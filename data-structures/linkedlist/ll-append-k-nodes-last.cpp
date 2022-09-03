#include <bits/stdc++.h>
using namespace std;
// singly linked list
// appending last k nodes to the front
class node{
    public:
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};
void insertHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
void insertTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return ;
    }
    node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = n;
}
void displaylist(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void deleteHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deleteNode(node* &head, int idx){
    if(head == NULL)
        return ;
    if(head->next == NULL){
        deleteHead(head);
        return;
    }

    node* temp = head;
    while(temp->next->data != idx)
        temp = temp->next;

    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
// to find the length of the list
int listLength(node* &head){
    int count = 0;
    node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

node* appendKNodes(node* &head, int k){
    node* newHead;
    node* newTail;
    node* tail = head;
    int l = listLength(head);
    k = k%l;
    int count = 1;

    while(tail->next != NULL){
        if(count == l-k)
            newTail = tail;
        if(count == l-k+1)
            newHead = tail;

        tail = tail->next;
        count++;
    }

    newTail->next = NULL;
    tail->next = head;
    return newHead;
}
int main(){
    node* head = NULL;
    insertTail(head,0);
    insertTail(head,1);
    insertTail(head,2);
    insertTail(head,3);
    insertTail(head,4);
    insertTail(head,5);
    displaylist(head);
    node* klist = appendKNodes(head,3);
    displaylist(klist);

    return 0;
}