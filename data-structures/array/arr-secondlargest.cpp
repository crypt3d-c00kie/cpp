#include <bits/stdc++.h>
using namespace std;
/*
int findLargest(int arr[], int n)
{
    int res=0;
    for (int i=0;i<n;i++)
        if(arr[i] > arr[res])
            res = i;

    return arr[res];
}*/
int findSecondLargest(int arr[], int n)
{
    int res = -1,largest = 0;

    for (int i=1;i<n;i++)
        if(arr[i] > arr[res])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest])
            if((res == -1) || (arr[i] > arr[res]))
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
    
    //cout << "The largest element in this array is ::  " << findLargest(nArr,nSize) << endl;
    cout << "The second largest element in this array is ::  " << findSecondLargest(nArr,nSize) << endl;

    return 0;
}