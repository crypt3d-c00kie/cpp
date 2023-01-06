#include <bits/stdc++.h>
using namespace std;

int kadaneMaxSumSubArray(vector<int> &arr){
    int best = 0,sum = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){ 
        sum = max(arr[i],sum+arr[i]);
        best = max(best,sum);
    }
    return best;
}
int main(){
    vector<int> given;
    int nSize = 0;

    cout << "Size of the array :: ";
    cin >> nSize;
    cout << "Elements :: ";
    for(int i=0; i<nSize; i++){
        int temp;
        cin >> temp;
        given.push_back(temp);
    }

    cout << "Solution :: " << kadaneMaxSumSubArray(given) << endl;
    return 0;
}
