#include <bits/stdc++.h>
using namespace std;
//given an array
//rotating it to the left by n times

void reverseArr(int arr[],int lowidx,int highidx){
    while (lowidx < highidx)
    {
       /* 
        int temp = arr[lowidx];
        arr[lowidx] = arr[highidx];
        arr[highidx] = temp;
        */
        swap(arr[lowidx], arr[highidx]);
        lowidx++;
        highidx--; 
    }
}

void leftRotate(int arr[],int n, int r){
    reverseArr(arr,0,r-1);
    reverseArr(arr,r,n-1);
    reverseArr(arr,0,n-1);
}

int main(){
    int nSize,nRotation;
    cout << "Number of elements in array :: ";
    cin >> nSize;

    int nArr[nSize];
    cout << "Enter the elements :: ";
    for(int i=0;i<nSize;i++)
        cin >> nArr[i];

    cout << "Given array :: ";
    for(int i=0;i<nSize;i++)
        cout << nArr[i] << " ";

    cout << "\nRotation by :: ";
    cin >> nRotation;

    leftRotate(nArr,nSize,nRotation);
    cout << "After rotation :: ";
    for(int i=0;i<nSize;i++)
        cout << nArr[i] << " ";

    return 0;
}