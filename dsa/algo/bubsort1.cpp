#include <iostream>
using namespace std;

void swap(int &x,int &y);
void print_arr(int arr1[],int n);

void bubsort(int arr[],int nSize)
{
    int i,j;

    for(i=0;i<nSize;i++)
    {
        for(j=0;j<nSize-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }

        }
        /*if (i==2) to print nth iteration;
        {
            print_arr(arr,nSize);
        }*/

    }
    cout << "Sorted array : ";
    print_arr(arr,nSize);
}

void print_arr(int arr[],int nSize)
{
    for(int i=0;i<nSize;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}

void swap(int &x,int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int nArray[1024];
    int nSize;

    cout << "Array size? ";
    cin >> nSize;

    for(int i=0;i<nSize;i++)
    {
        cin >> nArray[i];
    }
    bubsort(nArray,nSize);

}