#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
                                //selection sort with template
template<typename T>

class selection
{
    public:

    vector<T> nArr;
    int nSize;
    
    void get()
    {
        int i,nLen;
        T nData;

        cout << "Enter length of vector : ";
        cin >> nLen;

        for(i=0;i<nLen;i++)
        {
           // cout << "enter data : ";
            cin >> nData;
            //cout << nData;
            nArr.push_back(nData);
        }

    } 

    void sort() // sorting algorithm sorts data to ascending order
    {   
        nSize=nArr.size();

        for(int i=0;i<nSize;i++)
        {
            for(int j=i+1;j<nSize;j++)
            {
                if(nArr[i] > nArr[j])
                {
                    swap(nArr[i],nArr[j]);
                }

            }

        }
    }
    

    void display()
    {
        nSize = nArr.size();
        cout << "Displaying data :";
        for(int i=0;i<nSize;i++)
        {
            cout << nArr[i] << " ";

        }
        cout << endl;
    }
    
};

void menu()
{
    cout << "1. Push element to vector" << endl;
    cout << "2. Display the vector elements" << endl;
    cout << "3. Perform selection sort" << endl;
    cout << "4. Exit" << endl;
}
int main()
{
    int nChoice = 1;
    selection <int>s1;

    menu();

    while(true) 
    {
       

        cout << "Choice : ";
        cin >> nChoice;

        if(nChoice == 1)
        {
            s1.get();
        }  
        else if(nChoice == 2)
        {
            s1.display();
        }
        else if(nChoice == 3)
        {
             s1.sort(); // selection sort
        }
        else if(nChoice == 4)
        {
            cout << "exiting.." << endl;
            return 0;
        }
        else if((nChoice > 4) || (nChoice < 1))
        {
            cout << "please enter valid choice" << endl;
        }

        menu();
    }
  
    return 0;
}