#include <bits/stdc++.h>
using namespace std;

int distinctCount(int arr[],int n){
    int res = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[i] != arr[res-1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main(){
    int nSize;
    cout << "Size of the input array :: ";
    cin >> nSize;
    
    int nArr[nSize];
    cout << "Enter the elements :: ";
    for(int i=0;i<nSize;i++)
        cin >> nArr[i];

    //sorting the array with stl sort
    sort(nArr,nArr+nSize);
    cout << "\nGiven array count :: " << nSize;
    int nDistinct = distinctCount(nArr,nSize);
    cout << "\nAfter function call :: " << nDistinct << endl;    
   
    return 0;
}
