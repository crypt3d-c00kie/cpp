#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &matrix,int row, int col){
    if(matrix.size() == 0)
        return;
    
    for(int i=0;i<row;i++){
        for(int j=i+1;j<col;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}
int main(){
    int row,col;
    cout << "Rows :: ";
    cin >> row;
    cout << "Col :: ";
    cin >> col;

    vector<vector<int>> matrix;
    cout << "Input Matrix :: " << endl;
    for(int i=0;i<row;i++){
        vector<int> row;
        for(int j=0;j<col;j++){
            int tmp;
            cin >> tmp;
            row.push_back(tmp);
        }
        matrix.push_back(row);
    }

    transpose(matrix,row,col);
    cout << "After transpose :: " << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}