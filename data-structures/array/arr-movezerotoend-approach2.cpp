#include<bits/stdc++.h>
using namespace std;

// snowballing

void moveZeroEnd(vector<int> &given){
    int snowball = 0;
    for(int i=0;i<given.size();i++){
        if(given[i] == 0)
            snowball++;
        else if(snowball > 0){
            int temp = given[i];
            given[i] = 0;
            given[i-snowball] = temp;
        }
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

    moveZeroEnd(given);
    cout << "Result :: ";
    for(auto x : given)
        cout << x << " ";
    return 0;
}