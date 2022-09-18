#include<bits/stdc++.h>
using namespace std;

int findfact(int n){
    if(n == 0 or n == 1)
        return 1;
    return n*findfact(n-1);
}
int main(){
    int n;
    cout << "Input :: ";
    cin >> n;
    cout << "Factorial of " << n << " is :: " << findfact(n) << endl;
    return 0;
}