#include <bits/stdc++.h>
using namespace std;

vector<int> splitdigits(int n){
    vector<int> result;
    /* reversed

    while( n > 0){
        int mod = n%10;
        result.push_back(mod);
        n/=10;
    }
    */
    stack<int> st;
    while( n > 0){
        int mod = n%10;
        st.push(mod);
        n/=10;
    }
    while(!st.empty()){
        int x = st.top();
        result.push_back(x);
        st.pop();
    }
    return result;
}
int main(){
    int n;
    cout << "Input :: ";
    cin >> n;
    vector<int> res = splitdigits(n);
    cout << "Printing the digits :: ";
    for(auto x : res)
        cout << x << " ";

    return 0;
}