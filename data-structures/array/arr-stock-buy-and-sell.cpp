#include <bits/stdc++.h>
using namespace std;

// maximize the profit
// if the prices are in decreasing order then profit = 0 no matter what

int solve(vector<int>& arr){
    int nProfit = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] > arr[i-1])
                nProfit += (arr[i] - arr[i-1]);
    }
    return nProfit;
} 
int main(){
    
    int profit;
    int nSize;
    cout << "Enter number of elements : ";
    cin >> nSize;
    vector<int> given(nSize);
    cout << "Stock prices : ";
    for(auto& x : given)
        cin >> x;

    profit = solve(given);
    cout << "maxProfit :: " << profit << endl;
    return 0;
}
