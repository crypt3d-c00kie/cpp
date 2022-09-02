#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* prev;
    node* next;

    node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertTail(node* &head, int val){
    node* n = new node(val);
    node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = n;
    n->prev = temp;
}
int main(){



    return 0;
}