#include <bits/stdc++.h>
using namespace std;

void countFrequency(vector<int> &given){
    map<int,int> m1;
    for(int i=0;i<given.size();i++)
        m1[given[i]]++;
    for(auto x : m1)
        cout << x.first << " :: " << x.second << endl;
    
}
int main(){
    int n;
    vector<int> given;
    cout << "Number of elements :: ";
    cin >> n;
    cout << "Input :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
        
    countFrequency(given);
    return 0;
}
