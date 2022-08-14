#include <bits/stdc++.h>
using namespace std;

int moveZero(int arr[], int n){
    int nCount = 0; //counts the non-zero elements
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[nCount]);
            nCount++;
        }
    }
    return nCount;
}
int main(){
    int nSize;
    cout << "Number of Elements :: ";
    cin >> nSize;
    int nArr[nSize];
    
    cout << "Enter the elemeents :: ";
    for(int i=0;i<nSize;i++)
        cin >> nArr[i];

    cout << "\nBefore function call :: ";
    for(int i=0;i<nSize;i++)
        cout << nArr[i] << " ";

    int notZero = moveZero(nArr,nSize);

    cout << "\nAfter function call :: ";
    for(int i=0;i<nSize;i++)
        cout << nArr[i] << " ";

    cout << "\nNon Zero element count :: " << notZero << endl;
    return 0;
}