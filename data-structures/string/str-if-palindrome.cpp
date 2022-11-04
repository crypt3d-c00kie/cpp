#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &x){
    int begin = 0;
    int end = x.length()-1;

    while(begin < end){
        if(x[begin] != x[end])
            return false;

        begin++;
        end--;
    }
    return true;    
}
int main(){
    string s1;
    cout << "Type the string :: "; 
    cin >> s1;

    if(isPalindrome(s1))
        cout << "The given string is a palindrome" << endl;
    else
        cout << "The given string is not a palindrome" << endl;
    return 0;
}
