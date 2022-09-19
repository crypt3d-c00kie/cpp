#include<bits/stdc++.h>
using namespace std;

int fibbnum(int n){
    if(n <= 1)
        return n;

    return fibbnum(n-1)+fibbnum(n-2);
}
int main(){
    int n;
    cout << "Input :: ";
    cin >> n;
    cout << n << "th number in the fibonacci sequence  ::  " << fibbnum(n) << endl;
    return 0;
}