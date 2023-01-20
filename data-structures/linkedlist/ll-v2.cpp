#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
};

class linkedList{
    public:
    node* head = NULL;
    int size = 0;

    void insertFront(int val){
        node* n = new node();
        n->data = val;
        n->next = head;
        
        head = n;
        size++;
    }

    void insertEnd(int val){
        node* n = new node();
        node* last = head;

        n->data = val;
        n->next = NULL;

        if(head == NULL){
            head = n;
            return;
        }        

        while(last->next != NULL){
            last = last->next;
        }
        last->next = n;
        size++;
        return;
    }
    
    void printList(){
        node* curr = head;
        while(curr != NULL){
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
    void reverseList(){
        node* current = head;
        node* prev = NULL;
        node* next = NULL;

        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void deleteFront(int val){
        node* current = head;
        node* previous = NULL;

        while(current != NULL){
            if(current->data == val){
                if(previous != NULL){
                    previous->next = current->next;
                }
                else{
                    head = current->next;
                }
                delete current;
                size--;
                return;
            }
            previous = current;
            current = current->next;
        }
    }
    
    void deleteLast(int val){
        if(head == NULL)
            return;
        if(head->next == NULL){
            delete head;
            head = NULL;
            return;
        }
        node* current = head;
        while(current->next->next != NULL){
            current = current->next;
        }
        delete current->next;
        current->next = NULL;
    }

    void searchfor(int x){
        node* current = head;
        bool flag = false;
        while(current != NULL){
            if(current->data == x){
                cout << x <<" - Exists" << endl;
                flag = true;
            }
            current = current->next;
        }
        if(flag == false)
            cout << "Not Found" << endl;
    }
    void createCycle(int x){
        if(head == NULL){
            return;
        }
        node* current = head;
        while(current->next != NULL){
            if(current->data == x){
                node* cyclecreation = current;
                while(current->next != NULL){
                    current = current->next;
                }
                current->next = cyclecreation;
                break;
            }
            current = current->next;
        }
    }

    void hasCycle(){
        node* slow = head;
        node* fast = head;
        bool flag = false;
        while(fast != NULL and fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                cout << "Cycle Exists" << endl;
                flag = true;
                return;
            }
        }
        if(flag == false){
            cout << "Cycle doesn't exist" << endl;
        }
    }

   
};

int main(){
    linkedList given;
    vector<int> arr = {1,2,3,4,5,6,7,8,8,9,10};

    for(int i=0;i<arr.size();i++){
        given.insertEnd(arr[i]);
    }
    given.printList();
    // int choice = 0;
    // cout << "Search the list :: ";
    // cin >> choice;

    // given.searchfor(choice);
    // cout << "Before call :: ";
    // given.hasCycle();
    // given.createCycle(7);
    // cout << "After call :: ";
    // given.hasCycle();
    given.reverseList();
    given.printList();

    return 0;
}