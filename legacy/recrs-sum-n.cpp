#include<bits/stdc++.h>
using namespace std;
int sumtill(int n){
    if(n == 0)
        return 0;
    int sum = sumtill(n-1);
    return sum+n;
}
int main(){
    int n, sum;
    cout << "Input :: ";
    cin >> n;
    sum = sumtill(n);
    cout << "Sum of 1 to " << n << " is :: " << sum << endl;
    return 0;
}