#include<bits/stdc++.h>
using namespace std;
/*

Right Half Pyramid

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
    cout << "Half Pyramid from Right " << endl;

    for(int i=0;i<n;i++){
        for(int k =n-i;k>0;k--)
            cout << " "; //spaces decrease from n by i
        for(int j=0;j<=i;j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}