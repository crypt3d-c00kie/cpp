#include <bits/stdc++.h>
using namespace std;

// singly linked list
// floyds cycle detection
// make a cycle
// remove a cycle

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

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

void insertHead(node* &head, int val){
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

void displaylist(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// hare and tortoise algorithm to detect the cycle in linked list 
bool detectCycle(node* &head){
    node* tortoise = head;
    node* hare = head;

    while(hare != NULL and hare->next != NULL){
        tortoise = tortoise->next;
        hare = hare->next->next;

        if(hare == tortoise)
            return true;
    }
    return false;
}
void makeCycle(node* &head, int idx){
    node* temp = head;
    node* startNode;
    int count = 1;
    while(temp->next != NULL){
        if(count == idx)
            startNode = temp;
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}
// floyds tortoise and hare 
void removeCycle(node* &head){
    node* tortoise = head;
    node* hare = head;
    do{
        tortoise = tortoise->next;
        hare = hare->next->next;
    }while(hare!=tortoise);

    //if cycle starts at head
    if(hare == head){
        while(tortoise->next != head)
            tortoise = tortoise->next;
        tortoise->next = NULL;

        return;
    }
    hare = head;
    while(tortoise->next != hare->next){
        tortoise = tortoise->next;
        hare = hare->next;
    }
    tortoise->next = NULL;
}

int main(){
    node* head = NULL;
 
    insertTail(head,1);
    insertTail(head,2);
    insertTail(head,3);
    insertTail(head,4);
    insertTail(head,5);
    insertTail(head,6);
    insertTail(head,7);
    makeCycle(head,2);
    cout << "Cycle Detected Before :: " << detectCycle(head) << endl;
    removeCycle(head);
    displaylist(head);
    cout << "\nCycle Detected After :: " << detectCycle(head) << endl;

    return 0;
}