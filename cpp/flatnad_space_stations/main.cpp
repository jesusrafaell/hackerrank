#include <bits/stdc++.h>

using namespace std;

int flatlandSpaceStations(int n, vector<int> c) {
	int m = c.size();
	sort(c.begin(), c.end());
	if(m == n){
		return 0;
	}
	int maxi = 0;
  for(int i=0 ; i<=c[0] ; i++) maxi = max(maxi, c[0]-i);
  for(int i=0 ; i<m-1 ; i++){
 		for(int j = c[i] ; j<=c[i+1] ; j++) {
    	maxi = max(maxi, min(j-c[i], c[i+1]-j));
    }
  }
  for(int i=c[m-1] ; i<n ; i++) maxi = max(maxi, i-c[m-1]);

	return maxi;
}

void solved(){
	int n, m;
	cin >> n >> m;
	vector<int> arr(m);
	for(int i =0; i < m; ++i){
		cin >> arr[i];
	}
	int r = flatlandSpaceStations(n, arr);
	cout << r << endl;
}

int main(){
	solved();
	return 0;
}
