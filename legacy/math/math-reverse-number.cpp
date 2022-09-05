#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int val){
    string s = to_string(val);
    string rev = string(s.rbegin(),s.rend());
    int res = stoi(rev);
    return res;
}
int main(){
    int x;
    cout << "Input :: ";
    cin >> x;
    cout << "Given :: " << x << endl;
    cout << "Reversed :: " << reverseNumber(x) << endl;

    return 0;
}