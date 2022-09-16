#include<bits/stdc++.h>
using namespace std;
void printDivisors(int n){
    cout << "Divisors of " << n << " are :: ";
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(){
    int n;
    cout << "Input :: ";
    cin >> n;
    printDivisors(n);
    return 0;
}