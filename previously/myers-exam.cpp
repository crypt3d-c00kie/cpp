#include<bits/stdc++.h>
using namespace std;

int minsumSolve(vector<int> &given){ 
    int sum = 0;
    for(int i=0;i<given.size();i++){
        for(int j=i+1;j<given.size();j++){
            if(given[i] == given[j]){
                given[j]++;
            }
        }
    }
    for(auto x : given)
        sum += x;
    return sum;
}

int main(){
    int n;
    vector<int> given;

    cout << "Number of elements : ";
    cin >> n;
    cout << "Elements :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }

    cout << "Result :: " << minsumSolve(given);
    return 0;
}
