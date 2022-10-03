#include <bits/stdc++.h>
using namespace std;
//given an array
//rotating it to the left by n times

void rotateLeft(vector<int> &given,int key){
    if(key == 0)
        return;
    for(int i=0;i<key;i++){
        given.push_back(*given.begin());
        given.erase(given.begin());
    }
}

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

    rotateLeft(given,k);

    cout << "Resultant :: ";
    for(auto x : given)
        cout << x << " ";

    return 0;
}