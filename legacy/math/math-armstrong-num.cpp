#include<bits/stdc++.h>
using namespace std;
// armstrong number
// find n of digits
// sum = nth power of digits
// if sum = given == armstrong
bool armstrongNumber(int x){
    string s = to_string(x);
    int sum = 0;
    int n = s.length();
    for(int i=0;i<n;i++){
        int tmp = 0;
        tmp = (int)s[i] - '0';
        sum += pow(tmp,n);
    }
    string st = to_string(sum);
    if(st == s)
        return true;
    return false;
}

int main(){
    int x;
    cout << "Given :: ";
    cin >> x;
    if(armstrongNumber(x))
        cout << x << " is an armstrong number!!" << endl;
    else
        cout << x << " is not an armstrong number" << endl;
    return 0;
}