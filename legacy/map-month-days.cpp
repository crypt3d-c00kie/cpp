#include <bits/stdc++.h>
using namespace std;
// find months with 31 days
void solve(vector<string> &months, vector<int> &days){
    unordered_map<string,int> m1;
    for(int i=0;i<12;i++)
        m1[months[i]] = days[i];
    int k;
    bool flag = false;
    cout << "Days to filter from (28,30,31):: ";
    cin >> k;

    for(auto x : m1){
        if(x.second == k){
            cout << x.first << " :: " << x.second << endl;
            flag = true;
        }
    }
    if(!flag)
        cout << "Not Found" << endl;

}
int main(){
    vector<string> months = {"January","Febuary","March","April","May",
                            "June","July","August","September","October",
                            "November","December"};
    vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};

    solve(months,days);
    return 0;
}