#include <bits/stdc++.h>

using namespace std;

int maxFrec (map<int, int> m){
	int max = 0, aMax=0;
	for (const auto& i: m){
		if(i.second > max){
			max = i.second;
			aMax = i.first;
		}
	}
	return aMax;
}

int equalizeArray(vector<int> arr) {
	map<int, int> m;
	for (auto a : arr){
		m[a] += 1;
	}

	int aMax = maxFrec(m);
	int cont = 0;

	for (const auto& i: m){
		if(i.first != aMax){
			cont += i.second; 
		}
	}
	return cont;
}

void solved(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	int res = equalizeArray(arr);
	cout << res <<endl;
}

int main(){
	solved();
	return 0;
}
