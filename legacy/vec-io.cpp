#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){ 
    int size;
    cout << "Size :: ";
    cin >> size;

    vector<ll> v(size);
    cout << "Input :: ";
    for(auto& x : v)
        cin >> x;

    cout << "Output :: ";
    for(auto x : v)
        cout << x << " ";

    return 0;
}
