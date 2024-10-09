#include <bits/stdc++.h>

using namespace std;

int nonDivisibleSubset(int k, vector<int> s){
	map<int, int> m;
	for (auto i: s){
		m[i % k] += 1;
	}

	int ans = (m[0], 1);

	for (int i = 1; i < k; ++i){
		//m[i] == 0 jum to next i
		if(m[i] == 0) continue;
		if(i + i == k){
			ans++;
		}else{
			ans += max(m[i], m[k-i]);
			//delete de selections
			m[i] = 0;
			m[k-i] = 0;
		}
	}

	return ans;
}

void solved(){
	int n,k;
	cin >> n >> k;
	vector<int> s(n);
	for (int i = 0; i < n; ++i){
		cin >> s[i];
	}
	nonDivisibleSubset(k, s);
}

int main(){
	solved();
	return 0;
}
