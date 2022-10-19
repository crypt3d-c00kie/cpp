#include<bits/stdc++.h>
using namespace std;

void removeDupeSorted(vector<int> &given){
    set<int> s1;
    for(auto x : given)
        s1.insert(x);
    for(auto x : s1)
        cout << x << " ";
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
    cout << "Result :: ";
    removeDupeSorted(given);
    return 0;
}