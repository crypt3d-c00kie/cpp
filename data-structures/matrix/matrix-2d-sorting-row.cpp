#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sort_rows(vector<vector<int>> &given){
    vector<vector<int>> resultant;
    resultant = given;
    int rows = resultant[0].size();

    for(int i=0;i<rows;i++)
        sort(resultant[i].begin(),resultant[i].end());
    
    return resultant;
}
int main(){
    int row,col = 0;
    vector<vector<int>> given;
    vector<vector<int>> ans;
    cout << "Input rows and columns :: ";
    cin >> row >> col;

    for(int i=0;i<row;i++){
        vector<int> row;
        for(int j=0;j<col;j++){
            int temp;
            cin >> temp;
            row.push_back(temp);
        }
        given.push_back(row);
    }
    ans = sort_rows(given);

    cout << "::: Resultant :::" << endl;
    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            cout << ans[i][j] << " ";   
        }
        cout << endl;
    }
    return 0;
}