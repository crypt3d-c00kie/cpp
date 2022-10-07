#include<bits/stdc++.h>
using namespace std;
/*
    find minimum value and swap it to beginning
*/
void selectionSort(vector<int> &given){
    int swapIdx;
    for(int i=0;i<given.size()-1;i++){
        swapIdx = i;
        for(int j=i+1;j<given.size();j++){
            if(given[j] < given[swapIdx]){
                //swap(given[i], given[swapIdx]);
                swapIdx = j;
            }
        }
        if(swapIdx != i){
            swap(given[swapIdx],given[i]);
        }
    }
}
int main(){
    vector<int> given;
    int n;
    cout << "Number of elements :: ";
    cin >> n;

    cout << "Given :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }

    cout << "Sorted Result :: ";
    selectionSort(given);
    for(auto x : given)
        cout << x << " ";
    
    return 0;
}