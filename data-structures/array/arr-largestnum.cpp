#include <bits/stdc++.h>
using namespace std;

int findLargest(vector<int> &given){
    int res=given[0];
    for (int i=0;i<given.size();i++)
        if(res < given[i])
            res = given[i];

    return res;
}
int main()
{
    int nSize;
    cout << "Number of Elements :: ";
    cin >> nSize;
    vector<int> given;
    cout << "Given :: ";
    for(int i=0;i<nSize;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
    cout << "The largest element ::  " << findLargest(given) << endl;

    return 0;
}
