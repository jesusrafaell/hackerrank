#include <bits/stdc++.h>

using namespace std;

vector<int> stones(int n, int a , int b) {
	vector<int> res;
	if(a==b) res.push_back((n-1)*a);
	else {
		for(int i =1; i <= n; ++i){
			res.push_back(((n-i)*a)+((i-1)*b));
		}
	}
	sort(res.begin(), res.end());
	return res;
}

void solved(){
	int t,n,a,b;
	cin >> t;
	for(int i =0; i < t; ++i){
		cin >> n >> a >> b;
		vector<int> r = stones(n,a,b);
		cout << "Case #" << i+1 << endl;
		for(int i =0; i < int(r.size()); ++i){
			cout << r[i] << endl;
		}
	}
}

int main(){
	solved();
	return 0;
}
