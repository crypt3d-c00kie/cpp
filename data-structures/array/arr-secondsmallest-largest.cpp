#include<bits/stdc++.h>
using namespace std;

//o(nlogn) approach

void secondLargestSmallest(vector<int> &given){
    if(given.size() == 0 or given.size() == 1)
        cout << "-1" << endl;

    sort(given.begin(),given.end());
    cout << "Smallest :: " << given[0] << " | Second Smallest :: " << given[1] << endl;
    cout << "Largest :: " << given[given.size()-1] << " | Second Largest :: " << given[given.size()-2] << endl;
}

int main(){
    int n;
    cout << "Number of elements :: ";
    cin >> n;
    vector<int> given;
    cout << "Given :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
    
    secondLargestSmallest(given);
    return 0;
}