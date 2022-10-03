#include <bits/stdc++.h>
using namespace std;
//given an array
//writing a function to reverse it

void reverseArr(vector<int> &arr){
    int lowidx = 0;
    int highidx = arr.size()-1;
    while (lowidx < highidx)
    {  
        swap(arr[lowidx], arr[highidx]);
        lowidx++;
        highidx--; 
    }
}
int main(){
    int nSize;
    cout << "Number of Elements : ";
    cin >> nSize;
    vector<int> given;
    cout << "Given :: ";
    for(int i=0;i<nSize;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
   
    cout << "Reversed array :: ";
    reverseArr(given);
    for(auto x : given)
        cout << x << " ";
    return 0;
}