#include <bits/stdc++.h>
using namespace std;
//given an input array, this function checks if it is sorted
 
bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++)
        if(arr[i] < arr[i-1])
            return false;
    return true;
}
int main(){
    int nSize;
    cout << "Number of elements :: ";
    cin >> nSize;
    int nArr[nSize];
    cout << "Enter the elements :: ";
    for(int i=0;i<nSize;i++)
        cin >> nArr[i];
    if (isSorted(nArr,nSize))
        cout << "The given array is sorted!!" << endl;
    else
        cout << "The given array is not sorted ><" << endl;

    return 0;
}