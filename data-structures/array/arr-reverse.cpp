#include <bits/stdc++.h>
using namespace std;
//given an array
//writing a function to reverse it

void reverseArr(int arr[],int n){
    int lowidx = 0;
    int highidx = n-1;
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
int main(){
    int nSize;
    cout << "Number of Elements : ";
    cin >> nSize;
    int nArr[nSize];

    for(int i=0;i<nSize;i++)
        cin >> nArr[i];
    
    cout << "Given array :: ";
    for(int i=0;i<nSize;i++)
        cout << nArr[i] << " ";
    cout << "\nReversed array :: ";
    reverseArr(nArr,nSize);
    for(int i=0;i<nSize;i++)
        cout << nArr[i] << " ";
    cout << endl;
    return 0;
}