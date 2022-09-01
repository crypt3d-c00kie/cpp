#include <bits/stdc++.h>
using namespace std;

/*

Floyd's Triangle

1
2 3
4 5 6
7 8 9 10
11 12 13 14

*/
int main(){
    int n,count = 1;
    cout << "Number of lines :: ";
    cin >> n;

    cout << "Floyd's Triangle" << endl;
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}