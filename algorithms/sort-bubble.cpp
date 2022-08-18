#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
int main(){
    int nSize;
    vector<int> vGiven;
    
    cout << "Number of elements :: ";
    cin >> nSize;

    cout << "Elements :: ";
    for(int i=0;i<nSize;i++){
        int temp;
        cin >> temp;
        vGiven.push_back(temp);
    }

    cout << "Before bubble sort :: ";
    for(int i=0;i<nSize;i++)
        cout << vGiven[i] << " ";
    
    bubblesort(vGiven);

    cout << "\nAfter bubble sort :: ";
    for(int i=0;i<nSize;i++)
        cout << vGiven[i] << " ";

    return 0;
}