#include <iostream>
#include <cstdlib>

using namespace std;

// stacks via linked-list logic

struct Node
{
    int nData;
    struct Node* next;

};

Node* top = NULL;

void mypush()
{
    int nValue = 0;
    Node* ptr1 = NULL;
    ptr1 = (Node*)malloc(sizeof(struct Node));

    cout << "Data here : ";
    cin >> nValue;

    ptr1->nData = nValue;
    ptr1->next = top;
    top = ptr1;
}

void mypop()
{
    if(top != NULL)
    {
        cout <<"Popped element : " << top->nData << endl;
        top = top->next;
    }
}

void disp_stack()
{
    Node* ptr2;
    ptr2 = top;
    cout << "Status of the stack : ";

    while(ptr2 != NULL)
    {
        cout << ptr2->nData << " ";
        ptr2 = ptr2->next;
    }
    cout << endl;
}

// driver code
int main()
{
    int nChoice = 1;

    while((nChoice < 5) && (nChoice > 0))
    {
        cout << endl;
        cout << "1. Push an element" << endl;
        cout << "2. Pop the last element" << endl;
        cout << "3. Display current stack" << endl;
        cout << "4. Exit" << endl;
        
        cout << "\nYour Choice : ";
        cin >> nChoice;

        switch(nChoice)
        {
            case 1  :   mypush();
                        break;
            case 2  :   mypop();
                        break;
            case 3  :   disp_stack();
                        break;
            case 4  :   cout <<"Exiting code.." << endl;
                        return 0;
            default :   cout << "Please enter a valid choice." << endl;
                        break;
        }
    }
    
    return 0;
}