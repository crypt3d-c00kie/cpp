#include <bits/stdc++.h>
using namespace std;

//selection sort is the basic version of heap sort
//not stable
//but it does less memory writes

// set minidx to 0
// traverse array to find min
// if traverse val smaller than minidx then swap
// increment minidx
// loop

void selsort(vector<int> &arr){
    for(int i=0;i<arr.size()-1;i++){
        int min = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j] < arr[min])
                min = j;
        swap(arr[min],arr[i]);
        }
    }

}

 
int main(){
    vector<int> given;
    int nSize;

    cout << "Size of the array :: ";
    cin >> nSize;
    cout << "Elements :: ";
    for(int i=0; i<nSize; i++){
        int temp;
        cin >> temp;
        given.push_back(temp);
    }
    cout << "Before selection sort :: ";
    for(int i=0; i<nSize; i++)
        cout << given[i] << " ";
    
    selsort(given);

    cout << "'\nAfter selection sort :: ";
    for(int i=0; i<nSize; i++)
        cout << given[i] << " ";
    return 0;
}