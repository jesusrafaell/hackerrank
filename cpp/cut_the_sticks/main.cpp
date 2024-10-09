#include <bits/stdc++.h>

using namespace std;

vector<int> cutTheSticks(vector<int> arr) {
	vector<int> r;
	int n = arr.size();
	r.push_back(n);
	while (!arr.empty()) {
		auto minIt = *min_element(arr.begin(), arr.end());
		n = arr.size();
		for(int i = 0; i < n; ++i){
			arr[i] -= minIt;
		}
		arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());
		if(arr.empty()){
			break;
		}
		r.push_back(arr.size());
	}
	return r;
}

void solved(){
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i){
		cin >> v[i];
	}
	vector<int> r = cutTheSticks(v);
	int m = r.size();
	for (int i =0 ; i < m; ++i){
		cout << r[i] << endl;
	}
}

int main(){
	solved();
	return 0;
}
