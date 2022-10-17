#include <bits/stdc++.h>
using namespace std;

int findLargest(vector<int> &given)
{
    int res=INT_MIN;
    for (int i=0;i<given.size();i++)
        if(given[i] > given[res])
            res = i;

    return given[res];
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
        
/*  printing array
    for(int i=0;i<nSize;i++)
        cout << nArr[i] << " ";
*/
    cout << "The largest element ::  " << findLargest(given) << endl;

    return 0;
}