#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
    if(n == 0)
        return;
    printPattern(n-1);
    for(int i=1;i<=n;i++)
        cout << i << " ";
    cout << endl;
}
int main(){
    int n;
    cout << "Lines :: ";
    cin >> n;
    printPattern(n);
    return 0;
}