#include <bits/stdc++.h>
using namespace std;

int minimumDistances(vector<int> a) {
	int min = -1;
	int n = a.size();
	for(int i = 0; i < n; ++i){
		for(int j = i+1; j < n; ++j){
			if(a[i] != a[j]) continue;
			int dis;
			if(i > j){
				dis = i - j;
			}else{
				dis = j - i;
			}
			if(dis < min || min == -1){
				min = dis;
			}
		}
	}
	return min;
}

void solved(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	int res = minimumDistances(arr);
	cout << res <<endl;
}

int main(){
	solved();
	return 0;
}
