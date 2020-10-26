#include <iostream>
#define LEN 1024
using namespace std;

int nArr[LEN];
int i,nIdx,nTop; // demonstrating the functionality of stack with arrays

void menu()
{
    cout << "1.Push an element" << endl;
    cout << "2.Pop an element" << endl;
    cout << "3.Display existing elements" << endl;
    cout << "4.Display top element" << endl;
    cout << "5.Exit" << endl;
}
void pop()
{   
    if (nIdx == 0)
    {   
        cout << "\nUnderflow occurence \n\n";
    }
    else
    {
        nIdx--;
    }
}

void push()
{
    int nVal;

    cout << "Enter data : ";
    cin >> nVal;
    nArr[nIdx] = nVal;
    nIdx++;
    cout << endl;
}

int top()
{
    int nData;

    if(nIdx == 0)
    {
        cout << "No elements found" << endl;
        return -1;
    }
    else
    {
        nData = nArr[nIdx-1];    
    }
    
    
    return nData;
}

void disp()
{
    cout << "Displaying content : ";
     
    for(i = nIdx-1;i >= 0;i--)
    {
        cout << nArr[i] << " ";

    }
    cout << endl;

}

/* driver code */

int main()
{
    int nChoice = 1;
    int nVal;
    nIdx = 0;

    while (nChoice < 6)
    {   
        menu();
        cout << "\nYour Choice : ";
        cin >> nChoice;

        switch(nChoice)
        {
            case 1  :   push();
                        break;
            case 2  :   pop();
                        break;
            case 3  :   disp();
                        break;
            case 4  :   nVal = top();
                        cout << "Top value : " << nVal << endl;
                        break;
            case 5  :   return 0;

            default  :   cout << "Please enter a valid choice ";
                        break;

        }
    }
    return 0;
}