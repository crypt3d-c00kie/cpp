#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &given, int left, int mid, int right){
    int i = left;
    int j = mid + 1;
    int tempidx = left;
    vector<int> temp(given.size());

    // sorting elements to temp vector
    while( i<= mid and j <= right){
        if(given[i] < given[j]){
            temp[tempidx] = given[i];
            i++;
        }
        else{
            temp[tempidx] = given[j];
            j++;
        }
        tempidx++;
    }

    // copying remaining elements to the temp vector
    if(i > mid){
        while (j <= right){
            temp[tempidx] = given[j];
            tempidx++;
            j++;
        }
    }
    else{
        while( i<= mid){
            temp[tempidx] = given[i];
            tempidx++;
            i++;
        }
    }
    for(int k = left; k<=right;k++)
        given[k] = temp[k];
    
}

void mergeSort(vector<int> &given, int left, int right){
    if(left < right){
        int mid = left + (right - left) /2;
        mergeSort(given, left, mid);    // left subarray
        mergeSort(given, mid+1,right);  // right subarray
        merge(given, left, mid, right); // merging

    }
}

int main(){
    int n;
    vector<int> given;
    cout << "Number of elements :: ";
    cin >> n;

    cout << "Given :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }        
    cout << "Resultant :: ";
    mergeSort(given, 0 , given.size()-1);
    for(auto x : given)
        cout << x << " ";
    return 0;
}