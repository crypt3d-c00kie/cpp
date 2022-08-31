#include<bits/stdc++.h>
using namespace std;
/*

rectange pattern

*****
*****
*****
*****
*****

*/
int main(){
    int n;
    cout << "Number of lines :: ";
    cin >> n;

    cout << "Rectangle pattern" << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}