#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> splitNumber(ll n){
    string s = to_string(n);
    vector<ll> vi;
    int len = s.length();

    for(int i=0;i<len;i++){
        int tmp = (int)s[i] - '0'; // 0 for numbers, ` for lower case, @ for upper case iirc
        vi.push_back(tmp); 
    }
  /*  
    //splitting number without strings

    while(n > 0){
        int tmp = n%10;
        n /= 10;
        vi.push_back(tmp);
    }
    */
    return vi;
}

int main(){
    ll n, zCount = 0;
    cout << "Input :: ";
    cin >> n;

    vector<ll> v1 = splitNumber(n);
    cout << "Splitted Numbers :: ";
    for(auto x : v1)
        cout << x << " ";
    cout << endl << "Number of Zeroes :: ";
    for(auto x : v1)
        if(x == 0)
            zCount++;

    cout << zCount;
    return 0;
}