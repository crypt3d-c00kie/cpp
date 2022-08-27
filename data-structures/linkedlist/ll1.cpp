#include<bits/stdc++.h>
using namespace std;
/*
linked lists
effective insertion or deletion compared to arrays
variable sizes
non-contigous
*/
// node definition
class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};
// inserting values at the head(start)
void insertHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
// inserting values at the tail(end)
void insertTail(node* &head,int val){
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
// display the entire linkedlist
void displayllist(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
// searching a value in linkedlist and return index
bool searchllist(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletehead(node* &head){
    node* todel = head;
    head = head->next;
    delete todel;
}
// deleting the given value in linkedlist
void deletenode(node* &head, int val){
    if(head == NULL)
        return;
    if(head->next == NULL){
        deletehead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todel = temp->next;
    temp->next = temp->next->next;

    delete todel;
}

int main(){

    node* head = NULL;
    insertTail(head, 1);
    insertTail(head, 2);
    insertTail(head, 3);
    insertHead(head, 4);
    insertHead(head, 5);
    displayllist(head);
    
    deletenode(head,1);
    deletenode(head,2);

    displayllist(head);
    deletehead(head);
    displayllist(head);
    //cout << "Position of value 4(index starts from 0) :: " << searchllist(head,4) << endl;

    return 0;
}