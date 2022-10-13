#include<bits/stdc++.h>
using namespace std;

void sortInsertion(vector<int> &given){
    for(int i=1;i<given.size();i++){
        int now = given[i];
        int j = i -1;

        while(j>= 0 and given[j] > now){
            given[j+1] = given[j];
            j--;
        }
        given[j+1] = now;
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
    sortInsertion(given);

    for(auto x : given)
        cout << x << " ";

    return 0;
}
