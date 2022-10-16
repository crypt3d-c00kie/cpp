#include <bits/stdc++.h>
using namespace std;

void recrsInsertionSort(vector<int> &given, int n){
    if(n <= 1)
        return;

    recrsInsertionSort(given, n-1);
    int last = given[n-1];
    int j = n-2;

    while(j >= 0 and given[j] > last){
       swap(given[j+1], given[j]);
        j--;
    }
    given[j+1] = last;
}

void insertionSort(vector<int> &given){
    int now,j;
    for(int i=1;i<given.size();i++){
        now = given[i];
        j = i-1;

        while(j >=0 and given[j] > now){
            swap(given[j+1], given[j]);
            j--;
        }
        given[j+1] = now;
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
    recrsInsertionSort(given, n);
    cout << "Resultant :: ";
    for(auto x : given)
        cout << x << " ";

    return 0;
}