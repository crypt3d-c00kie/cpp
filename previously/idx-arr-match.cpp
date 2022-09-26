#include<bits/stdc++.h>
using namespace std;

// given two arrays
// one has values and other has idx
// match idx with values
// return resultant

// [1,2,3,4,5] <input1>
// [4,1,3,2,0] <input2>
// [5,2,4,3,1] <result>

vector<int> solve(vector<int> &given, vector<int> &idx){
    if(given.size() != idx.size()){
        cout << "Invalid inputs :: size mismatched" << endl;
        exit(0);
    }  
    vector<int> resultant;
    map<int,int> m1;

    for(int i=0;i<given.size();i++)
        m1[idx[i]] = given[i];
    
    for(auto x : m1){
        int tmp = x.second;
        resultant.push_back(tmp);
    }
    return resultant;
}
int main(){
    int n1,n2;
    vector<int> given;
    vector<int> idx;
    vector<int> solution;
    cout << "Number of elements in given array :: ";
    cin >> n1;
    cout << "Given :: ";
    for(int i=0;i<n1;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }

    cout << "Number of elements in Index array :: ";
    cin >> n2;
    cout << "Indices :: ";
    for(int i=0;i<n2;i++){
        int tmp;
        cin >> tmp;
        idx.push_back(tmp);
    }
    solution = solve(given,idx);
    cout << "Resultant array :: ";
    for(auto x : solution){
        cout << x << " ";
    }

    return 0;
}