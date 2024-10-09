#include <bits/stdc++.h>

using namespace std;

//m = row
//n = col

void printMatrix (vector<vector<int>> matrix){
	int m = matrix.size(), n = matrix[0].size();
	for (int i =0; i < m; ++i){
		for (int j =0; j < n; ++j){
			cout << matrix[i][j];
			if(j < n-1) {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void matrixRotation (vector<vector<int>> matrix, int r){
	int n = matrix.size(), m = matrix[0].size();
	int rings = min(n,m)/2;
	for (int  k = 0; k < rings; ++k){
		int rotation = r%(2*(n+m - 4*k)-4);
		for (int x = 0; x < rotation; ++x){
			//top
			for(int i = k; i < n-k-1; i++) {
    		int tmp = matrix[k][i];
				matrix[k][i] = matrix[k][i+1];
    		matrix[k][i+1] = tmp;
			}
			//right 
			for(int i = k; i < n-k-1; i++) {
    		int tmp = matrix[i][n-k-1];
    		matrix[i][n-k-1] = matrix[i+1][n-k-1];
    		matrix[i+1][n-k-1] = tmp;
			}
			// bottom 
			for(int i = m-k-1; i > k; i--) {
    		int tmp = matrix[n-k-1][i];
    		matrix[n-k-1][i] = matrix[n-k-1][i-1];
    		matrix[n-k-1][i-1] = tmp;
			}
			// Rotate left column
			for(int i = n-k-1; i > k+1; i--) {
    		int tmp = matrix[i][k];
    		matrix[i][k] = matrix[i-1][k];
    		matrix[i-1][k] = tmp;
			}
		}
	}
	printMatrix(matrix);
}

void solved(){
	int m, n, k;
	cin >> m >> n >> k ;
	//int matrix[m][n];
	vector<vector<int>> matrix(m);
	for (int i =0; i < m; ++i){
		matrix[i].resize(n);
		for (int j =0; j < n; ++j){
			cin >> matrix[i][j];
		}
	}
	matrixRotation(matrix, k);
}

int main() {
	solved();
}
