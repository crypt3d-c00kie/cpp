#include <iostream>
#include <cstdlib>

using namespace std;

// stack reversal without recursion.
// stacks via linked-list logic

struct Node
{
    int nData;
    struct Node* next;

};

Node* top = NULL; // main stack
Node* rev_top = NULL; // the reversal stack

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
void disp_reversal()
{
    Node* ptr1 = NULL;
    Node* ptr2 = NULL;

    int nVal;
    ptr1 = top;

    while(ptr1)
    {
        nVal = ptr1->nData;
        ptr1 = ptr1->next;
        ptr2 = (Node*)malloc(sizeof(struct Node));
        ptr2->nData = nVal;
        ptr2->next = rev_top;
        rev_top = ptr2;
    }
        ptr2 = rev_top;
    
        cout << "Elements in stack post-reversal : ";

        while(ptr2)
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

    while((nChoice < 6) && (nChoice > 0))
    {
        cout << endl;
        cout << "1. Push an element" << endl;
        cout << "2. Pop the last element" << endl;
        cout << "3. Display current stack" << endl;
        cout << "4. Reverse the elements" << endl;
        cout << "5. Exit" << endl;
        
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
            case 4  :   disp_reversal();
                        break;
            case 5  :   cout <<"Exiting code.." << endl;
                        return 0;
            default :   cout << "Please enter a valid choice." << endl;
                        break;
        }
    }
    
    return 0;
}