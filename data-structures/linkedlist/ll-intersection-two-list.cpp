#include <bits/stdc++.h>
using namespace std;
// two singly linked lists
// finding the intersection
// o(m+n) -- m and n being two lists
class node{
    public:
    int data;
    node* next;

    node(int x){
        data = x;
        next = NULL;
    }
};

void insertHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
void insertTail(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    
    temp->next = n;
}
void displayList(node* &head){
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

void deleteNode(node* &head,int idx){
    if(head == NULL)
        return;
    if(head->next = NULL){
        delete head;
        return;
    }
    node* temp = head;
    while(temp->next->data != idx)
        temp = temp->next;
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
int listLength(node* &head){
    int count = 0;
    node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void intersect (node* &head1, node* &head2, int idx){
    node* temp1 = head1;
    idx--;
    while(idx--){
        temp1 = temp1->next;
    }
    node* temp2 = head2;
    while(temp2->next != NULL)
        temp2 = temp2->next;

    temp2->next = temp1;

}
// finding the intersection of two lists
int intersection(node* &head1, node* &head2){
    int l1 = listLength(head1);
    int l2 = listLength(head2);

    int d = 0; //distance travelled
    node* ptr1;
    node* ptr2;
    
    if(l1 > l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while(d){
        ptr1= ptr1->next;
        if(ptr1 == NULL)
            return -1;
        d--;
    }

    while(ptr1 != NULL and ptr2 != NULL){
        if(ptr1 == ptr2)
            return ptr1->data;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;

}

int main(){
    node* head1 = NULL;
    node* head2 = NULL;

    insertTail(head1,101);
    insertTail(head1,102);
    insertTail(head1,103);
    insertTail(head1,104);
    insertTail(head1,5);
    insertTail(head1,6);
    insertTail(head2,9);
    insertTail(head2,10);
    //intersect(head1,head2,3);
    displayList(head1);
    displayList(head2);
    cout << intersection(head1,head2) << endl;


    return 0;
}