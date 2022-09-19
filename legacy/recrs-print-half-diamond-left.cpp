#include<bits/stdc++.h>
using namespace std;

void printHalfDiamond(int n){
    if(n == 1){ // if n==0 end case itll print 1 twice
        cout << 1 << endl;
        return;
    }
    for(int i=1;i<=n;i++)
        cout << i << " ";
    cout << endl;
    printHalfDiamond(n-1);
    for(int i=1;i<=n;i++)
        cout << i << " ";
    cout << endl;
}
int main(){
    int n;
    cout << "Input :: ";
    cin >> n;
    printHalfDiamond(n);
    return 0;
}