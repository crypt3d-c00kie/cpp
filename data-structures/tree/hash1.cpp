#include <iostream>
#define SIZE 10
using namespace std;

// hash of 10 numbers

int arr[10]; // 

int search()
{
    int value;
    cout << "Enter the value to search " << endl;
    cin >> value ;
    int key ;
    key = value % SIZE  ;
    if ( arr[key] == value) return key;
    int i=0;
    for(i=key+1;i<SIZE;i++)
    {
        if ( arr[i] == value) return i;
    }
    for(i=key-1;i>=0;i--)
    {
        if ( arr[i] == value) return i;
    }

}
void insert()
{
    int x;
    int k;
    int i;
    cout << "Enter the value to insert " << endl;
    cin >> x; //64
    k = ( x % SIZE ) ;
    cout << "k is " << k << endl;
    if ( arr[k] == -1)
    {
        arr[k] = x;
        return ;
    }
    for(i=k+1;i<SIZE;i++)
    {
       if ( arr[i] == -1)
       {
           arr[i] = x ;
           return ;
       } 
    }
    for(i=k-1;i>=0;i--)
    {
       if ( arr[i] == -1)
       {
           arr[i] = x ;
           return ;
       } 
    }

}
void disp()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        cout << i << "::" << arr[i] << endl;
    }
}
int main()
{
    int i, n=10;
    for(i=0;i<n;i++)
    {
        arr[i] = -1;
        
    }
    disp();
    for(i=0;i<4;i++)
    {
        insert();
        disp();
    }  
    disp();  
    int idx = search();
    cout << idx << endl;




}