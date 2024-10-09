#include <bits/stdc++.h>

using namespace std;

int workbook(int n, int k, vector<int> arr) {
	int page = 0, sp = 0;
	for (int i =0; i < n; ++i){
		page++;
		int p = 1;
		int np = arr[i];
		while(np > 0){
			np--;
			if(p == page){
				sp++;
			}
			if(p%k == 0 && np != 0){
				page++;
			}
			p++;
		}
	}
	return sp;
}

void solved(){
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for(int i =0; i < n; ++i){
		cin >> arr[i];
	}
	int r = workbook(n,k,arr);
	cout << r << endl;
}

int main(){
	solved();
	return 0;
}
