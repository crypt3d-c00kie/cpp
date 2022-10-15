#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &given, int n){
    if(n == 1)
        return;
    int counter = 0;
    for(int i=0;i<n-1;i++){
        if(given[i] > given[i+1]){
            swap(given[i], given[i+1]);
            counter++;
        }
    }
    if(counter == 0)
        return;
    bubbleSort(given, n-1);
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

    bubbleSort(given, n);
    cout << "Resultant :: ";
    for(auto x : given)
        cout << x << " ";

    return 0;
}