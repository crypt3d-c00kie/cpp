#include<bits/stdc++.h>
using namespace std;
// o(sqrt(n)) time 
// o(1) space
void printDivisorsOptimal(int n){
    cout << "The Divisors of " << n << " are :: ";
    for(int i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            cout << i << " ";
            if(i != n/i)
                cout << n/i << " ";
        }
    }

    cout << endl;
}

int main(){
    int n;
    cout << "Input :: ";
    cin >> n;
    printDivisorsOptimal(n);
    return 0;
}