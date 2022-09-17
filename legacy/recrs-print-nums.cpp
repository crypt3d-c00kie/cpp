#include <bits/stdc++.h>
using namespace std;
void printRange(int n){
    if(n > 0){
        //cout << n << " "; if n to 1
        printRange(n-1);
        cout << n << " "; // if 1 to n
    }
}
int main(){
    int n;
    cout << "Input :: ";
    cin >> n;
    printRange(n);
    return 0;
}