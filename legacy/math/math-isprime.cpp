#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++)
        if(n%i == 0)
            return false;
    return true;
}
int main(){
    int n,res;
    cout << "Input :: ";
    cin >> n;
    cout << "Is the input prime? :: " << isPrime(n) << endl;
    return 0; 
}