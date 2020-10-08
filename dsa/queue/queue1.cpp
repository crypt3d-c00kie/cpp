#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int nData;
    struct Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enq_front()
{
    Node* ptr1 = NULL;
    int nVal;

    ptr1 = (Node*)malloc(sizeof(struct Node));
    cin >> nVal;

    ptr1->nData = nVal;
    ptr1->next = NULL;

    if (front == NULL)
    {
        front = rear = ptr1;
    }
    else
    {
        ptr1->next = front;
        front = ptr1;
    }
}

void enq_rear()
{
    Node* ptr2 = NULL;
    int nVal;

    ptr2 = (Node*)malloc(sizeof(struct Node));
    cin >> nVal;

    ptr2->nData = nVal;
    ptr2->next = NULL;

    if (front == NULL)
    {
        front = rear = ptr2;

    }
    else
    {
        rear->next = ptr2;
        rear = ptr2;
    }
}

void q_disp()
{
    Node* ptr3 = NULL;
    ptr3 = front;

    if( ptr3 == NULL)
    {
        return;
    }
    else
    {
        while(ptr3)
        {
            cout << ptr3->nData << "->";
            ptr3 = ptr3->next;
        }
    }
    cout << endl;
}

void deque()
{
    if ( front == NULL)
    {
        cout << "Underflow" << endl;
        return;
    }
    else
    {
        front = front->next;
        if(front == NULL)
        {
            rear = NULL;
        }
    }
}

void fQuestion()
{
        cout << "1. Insertion from front" << endl;
        cout << "2. Insertion from rear" << endl;
        cout << "3. Delete an element" << endl;
        cout << "4. Display " << endl;
        cout << "0. Exit" << endl;
}

int main()
{
    int nChoice;

    fQuestion();

    while(1)
    {
        cout << "Your choice : ";
        cin >> nChoice;
        
        if(nChoice == 0)
        {
            break;
        }
        else if (nChoice == 1)
        {
            enq_front();
        }
        else if (nChoice == 2)
        {
            enq_rear();
        }
        else if (nChoice == 3)
        {
            deque();
        }
        else if (nChoice == 4)
        {
            q_disp();
        }
        else if (nChoice == 5)
        {
            cout << "\nExiting.." << endl;
            return 0;
        }
  }

    return 0;
}