#include<bits/stdc++.h>
using namespace std;
bool numPalindrome(int x){
    string s = to_string(x);
    string reverse = string(s.rbegin(),s.rend());
    if(s == reverse)
        return true;
    return false;
}
int main(){
    int x;
    cout << "Given :: ";
    cin >> x;
    cout << "Is the given number a palindrome? (1 is true, 0 is false) :: " << numPalindrome(x) << endl;
    return 0;
}