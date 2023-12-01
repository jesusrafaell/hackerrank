#include <bits/stdc++.h>

using namespace std;

vector<int> serviceLaned(int n, vector<int> width,vector<vector<int>> cases) {
	vector<int> res;
	int t = cases.size(); 
	for(int i =0; i < t; ++i){
	 	auto minIt = min_element(width.begin() + cases[i][0], width.begin() + cases[i][1] + 1);
		cout << "case #" << i+1 << " -> " << *minIt << endl;
		res.push_back(*minIt);
	}
	return res;
}

void solved(){
	int n, t;
	cin >> n >>t;
	vector<int> arr(n);
	for (int i=0; i < n; ++i){
		cin >> arr[i];
	}
	vector<vector<int>> m(t);
	for (int i=0; i < t; ++i){
		vector<int> aux(2);
		cin >> aux[0] >> aux[1];
		m[i]=aux;
	}
	vector<int> res = serviceLaned(n,arr,m);
	int s=res.size();
	for (int i =0; i < s; ++i){
		cout << res[i] << endl;
	}
}

int main(){
	solved();
	return 0;
}
