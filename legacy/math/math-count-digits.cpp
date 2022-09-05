#include <bits/stdc++.h>
using namespace std;

int countDigits(int val){
    string given = to_string(val);
    return given.length();
}
int main(){
    int x;
    cout << "Input :: ";
    cin >> x;

    cout << "Number of digits in given :: " << countDigits(x) << endl;
    return 0;
}