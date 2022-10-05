#include <bits/stdc++.h>
using namespace std;
/*
    given array, rotate it to right by k times

    Input: nums = [1,2,3,4,5,6,7], k = 3
    Output: [5,6,7,1,2,3,4]

    Explanation:
    rotate 1 steps to the right: [7,1,2,3,4,5,6]
    rotate 2 steps to the right: [6,7,1,2,3,4,5]
    rotate 3 steps to the right: [5,6,7,1,2,3,4]

*/

void rotateRight(vector<int> &given,int key){
    int len = given.size();
    if(key == 0)
        return;
    for(int i=0;i<key;i++){
        given.insert(given.begin(), given[len-1]); //pos, val
        given.pop_back();
    }
}

int main(){
    int nSize,nRotation;
    cout << "Number of elements in array :: ";
    cin >> nSize;

    vector<int> given;
    cout << "Enter the elements :: ";
    for(int i=0;i<nSize;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
    
    cout << "Rotation by :: ";
    cin >> nRotation;

    rotateRight(given,nRotation);
    cout << "After rotation :: ";
    for(auto x : given)
        cout << x << " ";
    return 0;
}