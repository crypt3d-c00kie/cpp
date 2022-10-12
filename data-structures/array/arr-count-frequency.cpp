#include <bits/stdc++.h>
using namespace std;

void freqCount(vector<int> &given){
    int n = given.size();
    vector<bool> visited(n,false); // initializing with false

    for(int i=0;i<n;i++){ //traversing through every element
        if(visited[i] == true)
            continue;
        
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(given[i] == given[j]){
                visited[j] = true;
                count++;
            }
        }
        cout << given[i] << " : " << count << endl; 
    }
}
int main(){
    int n;
    cout << "Number of elements :: ";
    cin >> n;

    cout << "Given :: ";
    vector<int> given;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
    //given = {1,2,3,4,5};
    freqCount(given);

    return 0;
}