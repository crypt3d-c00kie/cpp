#include<bits/stdc++.h>
using namespace std;

/*

Reverse Half Pyramid Right

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
    cout << "Reverse Half Pyramid Right" << endl;

    for(int i=n;i>0;i--){
        for(int k=n-i;k>0;k--)
            cout << " ";
        for(int j=i;j>0;j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}