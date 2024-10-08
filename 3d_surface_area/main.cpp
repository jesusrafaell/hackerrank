10
2 3 4 5 6 7 8 9 10 1

2 3 4 5 6 7 8 9 10 10
2 3 4 5 6 7 8 9 9 10
2 3 4 5 6 7 8 8 9 10
2 3 4 5 6 7 7 8 9 10
2 3 4 5 6 6 7 8 9 10
2 3 4 5 5 6 7 8 9 10
2 3 4 4 5 6 7 8 9 10
2 3 3 4 5 6 7 8 9 10
2 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10

#include <bits/stdc++.h>

using namespace std;

int surfaceArea(vector<vector<int>> A) {
	int total=0, r = A.size(), c = A[0].size();

	enum dir {NORTH=0, EAST, SOUTH, WEST}; //0 to 3

	for(int i =0; i < r; ++i){
		for(int j =0; j < c; ++j){
			//diff height
			int h = A[i][j];
			int side[4];
			if(i-1 < 0){
				side[dir::NORTH] = h;
			}else{
				side[dir::NORTH] = h - A[i-1][j];
			}
			if(i + 1 >= r){
				side[dir::SOUTH] = h;
			}else{
				side[dir::SOUTH] = h - A[i+1][j];
			}
			if(j - 1 < 0){
				side[dir::WEST] = h;
			}else{
				side[dir::WEST] = h - A[i][j-1];
			}
			if(j + 1 >= c){
				side[dir::EAST] = h;
			}else{
				side[dir::EAST] = h - A[i][j+1];
			}

			int local = 2; //top + bottom

			for(int x=0; x < 4; ++x){
				if(side[x] > 0){
					local += side[x];
				}
			}
			total += local;
		}
	}
	
	return total;
}

void solved(){
	int n,m;
	cin >> n >> m;
	vector<vector<int>> A(n);
	for (int i =0; i < n; ++i){
		vector<int> B(m);
		for (int j =0; j < m; ++j){
			cin >> B[j];
		}
		A[i] = B;
	} 
	int r = surfaceArea(A);
	cout << r << endl;
}

int main(){
	solved();
	return 0;
}
