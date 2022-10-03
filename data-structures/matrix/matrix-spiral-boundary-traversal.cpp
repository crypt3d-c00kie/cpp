#include <bits/stdc++.h>
using namespace std;

/*
    Boundary traversal (or spiral traversal)
    --->
  ^ 1 2 3   |
  | 4 5 6   v
    7 8 9
    <---
    output : 1 2 3 6 9 8 7 4 5
*/

vector<int> spiralOrder(vector<vector<int>>& matrix){
    vector<int> resultant;
    int top,bottom,left,right;
    int pathway = 0;
    top = 0, left=0;
    bottom = matrix.size()-1;
    right = matrix[0].size()-1;

    while(top <= bottom and left <= right){
        if(pathway == 0){
            for(int i=left;i<=right;i++)
                resultant.push_back(matrix[top][i]);
            top++;
        }
        else if(pathway == 1){
            for(int i=top;i<=bottom;i++)
                resultant.push_back(matrix[i][right]);
            right--;
        }
        else if(pathway == 2){
            for(int i=right;i>=left;i--)
                resultant.push_back(matrix[bottom][i]);
            bottom--;
        }
        else if(pathway == 3){
            for(int i=bottom;i>=top;i--)
                resultant.push_back(matrix[i][left]);
            left++;
        }
        pathway = (pathway+1)%4;
    }
    return resultant; 
}

int main(){
    vector<vector<int>> matrix;
    int row,col;
    cout << "Row :: ";
    cin >> row;
    cout << "Col :: ";
    cin >> col;
    cout << "matrix :: " << endl;
    for(int i=0;i<row;i++){
        vector<int> rw;
        for(int j=0;j<col;j++){
            int tmp;
            cin >> tmp;
            rw.push_back(tmp);
        }
        matrix.push_back(rw);
    }
    vector<int> resultant;
    cout << "Resultant :: ";
    resultant = spiralOrder(matrix);
    for(auto x : resultant)
        cout << x << " ";

    return 0;
}