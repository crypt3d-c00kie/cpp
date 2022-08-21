#include<bits/stdc++.h>
using namespace std;

// program to check if the subsequence exist 

bool ifsubsequence(string &s1, string &s2){
    if(s1.length() == 0)
        return true;
    if(s2.length() == 0)
        return false;

    int j=0;
    for(int i=0;i<s1.length()&& j<s2.length();i++){
        if(s1[i] == s2[j])
            j++;
    }
   
   return (j==s2.length());
}
int main(){
    string s1,s2;
    cout << "Type the string :: ";
    cin >> s1;
    cout << "Subsequence check :: ";
    cin >> s2;

    if(ifsubsequence(s1,s2) == true)
        cout << "It's a subsequence " << endl;
    else
        cout << "It's not a subsequence!" << endl;
    return 0;
}