#include <bits/stdc++.h>
using namespace std;
/*
    given a matrix contains only positive numbers with some -1
    and everytime i come across a -1
    i have to replace it by the minimum val of the entire column

    transpose matrix
    find min row
    reassign -1 = val of minrow
    transpose matrix
    print matrix
 
    input the matrix ::
    1 2 -1
    -1 3 5
    4 -1 3
    
    resultant :: 
    1 2 3
    1 3 5
    4 2 3
*/
void transpose(vector<vector<int>>& given, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = i + 1; j < col; j++) {
			swap(given[i][j], given[j][i]);
		}
	}
}
void disp(vector<vector<int>> x) {
	int i = 0;
	int l = x.size();
	for (i = 0; i < l; i++) {
		vector<int> tmp = x[i];
		for (auto t : tmp) {
			cout << t << " ";
		}
		cout << endl;
	}
}
void solve(vector<vector<int>>& matrix, int row, int col) {
	
	transpose(matrix, row, col);
	
	for (int i = 0; i < row; i++) {
		int minval = INT_MAX;
		bool checkChanged = false;
		for (int j = 0; j < col; j++) {
			if (matrix[i][j] != -1 && minval >= matrix[i][j]) {
				minval = matrix[i][j];
				checkChanged = true;
			}
		}
		for (int j = 0; j < col; j++) {
			if (matrix[i][j] == -1 && checkChanged) {
				matrix[i][j] = minval;
			}
		}
	}
	transpose(matrix, row, col);
}
int main() {
	int row, col;
	cout << "rows :: ";
	cin >> row;
	cout << "columns :: ";
	cin >> col;

	if (row != col) {
		cout << "row/col size mismatch!" << endl;
		exit(0);
	}
	vector<vector<int>> matrix;
	cout << "input the matrix :: " << endl;
	for (int i = 0; i < row; i++) {
		vector<int> rw;
		for (int j = 0; j < col; j++) {
			int tmp;
			cin >> tmp;
			rw.push_back(tmp);
		}
		matrix.push_back(rw);
	}
	solve(matrix, row, col);
	cout << "resultant :: " << endl;
	
	for (int i = 0; i < row; i++) {
		//vector<int> vx = matrix[i];
		for (int j = 0; j < col; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
