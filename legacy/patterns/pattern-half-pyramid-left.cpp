#include<bits/stdc++.h>
using namespace std;
/*

Left Half Pyramid

*
**
***
****
*****

*/
int main(){
    int n;
    cout << "Number of lines :: ";
    cin >> n;
    cout << "Half Pyramid from Left" << endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}