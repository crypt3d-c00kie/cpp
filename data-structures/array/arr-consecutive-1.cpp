#include<bits/stdc++.h>
using namespace std;

int consecutiveOnes(vector<int> &given){
    vector<int> visited;
    int count = 0;
    for(int i=0;i<given.size();i++){
        if(given[i] == 1){
            count++;
            if(i+1 == given.size())
                visited.push_back(count);
        }
        else{
            //cout << "inside loop :: " << count << endl;
            visited.push_back(count);
            count = 0;
        }
    }
    int maxCount = INT_MIN;
    for(auto x : visited){
        //cout << x << " | ";
        maxCount = max(maxCount, x);
    }
    return maxCount;
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

    cout << "Most consective 1s :: " << consecutiveOnes(given);
    return 0;
}