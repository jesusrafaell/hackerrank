#include <bits/stdc++.h>

using namespace std;

int beautifulTriplets(int d, vector<int> arr) {
	int n = arr.size();
	int cont = 0;
	for(int i =0; i < n-2; ++i){
		for(int j =i+1; j < n-1; ++j){
			int num1 = arr[j] - arr[i];
			if(num1 != d) continue;
			for(int k =i+2; k < n; ++k){
				int num2 = arr[k] - arr[j];
				if(num1 == d && num2 == d){
					cont++;
				}
			}
		}
	}
	return cont;
}

void solved(){
	int n, d;
	cin >> n >> d;
	vector<int> arr(n);
	for(int i =0; i < n; ++i){
		cin >> arr[i];
	}
	int r = beautifulTriplets(d, arr);
	cout << r << endl;
}

int main(){
	solved();
	return 0;
}
