#include <bits/stdc++.h>
using namespace std;

int findLargest(int arr[], int n)
{
    int res=0;
    for (int i=0;i<n;i++)
        if(arr[i] > arr[res])
            res = i;

    return arr[res];
}
int main()
{
    int nSize;
    cout << "Number of Elements : ";
    cin >> nSize;
    int nArr[nSize];

    for(int i=0;i<nSize;i++)
        cin >> nArr[i];
        
/*  printing array
    for(int i=0;i<nSize;i++)
        cout << nArr[i] << " ";
*/
    cout << "The largest element in this array is ::  " << findLargest(nArr,nSize) << endl;

    return 0;
}