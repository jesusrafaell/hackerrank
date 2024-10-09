#include <bits/stdc++.h>

using namespace std;

vector<string> cavityMap(vector<string> grid) {
	int n = grid.size();
	for(int g = 1; g < n-1; ++g){
		for(int i = 1; i < n-1; ++i){
			//char to int
			int x = grid[g][i] - '0';
			int xr = grid[g][i+1] - '0';
			int xl = grid[g][i-1] - '0';
			int xt = grid[g-1][i] - '0';
			int xb = grid[g+1][i]  - '0';
			if(x > xr && x > xl && x > xt && x > xb){
				grid[g][i] = 'X';
			}
		}
	}
	return grid;
}


void solved(){
	int n;
	cin >> n;
	vector<string> arr(n);
	for(int i =0; i < n; ++i){
		cin >> arr[i];
	}
	vector<string> r = cavityMap(arr);
	for(int i =0; i < n; ++i){
		cout << r[i] << endl;
	}
}

int main(){
	solved();
	return 0;
}
