#include <bits/stdc++.h>
using namespace std;
//given an array
//rotating it to the left by n times
/*

approach 1

void reverseArr(int arr[],int lowidx,int highidx){
    while (lowidx < highidx)
    {
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
*/
int main(){
    vector<int> given;
    int size,k;
    cout << "Number of elements :: ";
    cin >> size;
    cout << "Given :: ";
    for(int i=0;i<size;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
    cout << "Rotation key :: ";
    cin >> k;

    rotate(given.begin(), given.begin()+k, given.end());

    cout << "Resultant :: ";
    for(auto x : given)
        cout << x << " ";

    return 0;
}
