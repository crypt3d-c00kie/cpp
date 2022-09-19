#include<bits/stdc++.h>
using namespace std;

void printInvertedPattern(int n){
    if(n == 0)
        return;

    for(int i=1;i<=n;i++)
        cout << i << " ";
    cout << endl;
    printInvertedPattern(n-1);

}
int main(){
    int n;
    cout << "Lines :: ";
    cin >> n;
    printInvertedPattern(n);
    return 0;
}