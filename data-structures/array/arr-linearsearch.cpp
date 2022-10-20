#include<bits/stdc++.h>
using namespace std;

void linearSearch(vector<int> &given, int key){
    for(int i=0;i<given.size();i++){
        if(given[i] == key){
            cout << "Found the key ::" << key << " at index :: " << i << endl;
            return;
        }
    }
    cout << "Key not found <404>" << endl;
}
int main(){
    int n, key;
    vector<int> given;
    cout << "Number of elements :: ";
    cin >> n;
    cout << "Given :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
    cout << "Key to search :: ";
    cin >> key;
    linearSearch(given, key);
    return 0;
}