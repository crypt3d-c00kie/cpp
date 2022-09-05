#include <bits/stdc++.h>
using namespace std;
// gcd by euclidean algorithm
int gcd2(int a,int b){
    if(b == 0)
        return a;
    return gcd2(b,a%b);
}
int main(){
    int x,y;
    cout << "Two numbers :: ";
    cin >> x >> y;

    cout << "GCD :: " << gcd2(x,y) << endl;
    return 0;
}