#include <bits/stdc++.h>
using namespace std;

int sumDigits(int n){
    if(n == 0)
        return 0;
    int lastdig = n%10;
    int remaining = n/10;
    return sumDigits(remaining) + lastdig;
}
int main(){
    int num;
    cout << "Input :: ";
    cin >> num;
    cout << "Sum of Digits of " << num << " is :: " << sumDigits(num) << endl;

    return 0;
}