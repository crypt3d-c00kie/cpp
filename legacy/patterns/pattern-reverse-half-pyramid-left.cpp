#include<bits/stdc++.h>
using namespace std;
/*

Reverse Half Pyramid Left

*****
****
***
**
*

*/

int main(){
    int n;
    cout << "Number of lines :: ";
    cin >> n;
    cout << "Reverse Half Pyramid Left" << endl;

    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}