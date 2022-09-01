#include<bits/stdc++.h>
using namespace std;

/*

The Butterfly Pattern

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *


*/
int main(){
    int n;
    cout << "Number of lines :: ";
    cin >> n;

    cout << "The Butterfly Pattern" << endl;
    for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++){
            if(i+j>=(2*n - 1) and (j-i>=0))
                cout << "*";
            else if(j-i<=0 and i+j <= (2*n -1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }   
    return 0;
}