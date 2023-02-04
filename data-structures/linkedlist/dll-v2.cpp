#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;
};

class doublylist{
    public:
        node* head = NULL;
        node* tail = NULL;
        int size = 0;

        void insertHead(int x){
            node* n = new node();
            n->data = x;
            n->next = head;
            n->prev = NULL;

            if (head != NULL){
                head->prev = n;
            }
            head = n;
            if(tail == NULL){
                tail = head;
            }
            size++;
        }

        void insertTail(int x){
            node* n = new node();
            n->data = x;
            n->next = NULL;
            n->prev = tail;

            if(tail != NULL){
                tail->next = n;
            }
            tail = n;
            if(head == NULL){
                head = tail;
            }
            size++;
        }

        void displaylist(){
            node* curr = head;
            while(curr != NULL){
                cout << curr->data << " ";
                curr = curr->next;
            }
            cout << " <> size :: " << size << endl;
        }

        void deleteNode(int x){
            node* curr = head;
            while(curr != NULL and curr->data != x){
                curr = curr->next;
            }

            if(curr == NULL){
                cout << "Value not found" << endl;
                return;
            }

            if(curr->prev != NULL)
                curr->prev->next = curr->next;
            else
                head = curr->next;
            
            if(curr->next != NULL)
                curr->next->prev = curr->prev;
            else
                tail = curr->prev;

            delete curr;
            size--;
        }
};

class additional : public doublylist{
    public:
    void deleteLast(){
        if(tail == NULL){
            cout << "The list is empty" << endl;
            return;
        }
        node* secondLast = tail->prev;
        secondLast->next = NULL;
        tail = secondLast;
        size--;
    }

    void reverse(){
       node* curr = tail;
            node* temp = NULL;
            while(curr != NULL){
                temp = curr->next;
                curr->next = curr->prev;
                curr->prev = temp;
                curr = curr->next;
            }
            temp = head;
            head = tail;
            tail = temp;
    }
};


int main(){

    additional dll;
    dll.insertHead(5);
    dll.insertHead(6);
    dll.insertTail(7);
    dll.insertTail(8);

    dll.displaylist();
    dll.deleteLast();
    dll.reverse();
    dll.displaylist();
    dll.deleteNode(5);
    dll.displaylist();
    
    return 0;
}