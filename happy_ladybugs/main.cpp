#include <bits/stdc++.h>

using namespace std;

string happyLadybugs(string b) {
	int n = b.length();
	vector<int> alp(27);
	bool flag = true;
	for(int i =0, j =0; i <n; ++i, j+=2){
		if(flag && j < n-1 && b[j] != b[j+1] && b[j] != b[j-1]){
			flag = false;
		}
		if(b[i] == '_'){
			alp[26]++;
		}else{
			alp[b[i]-'A']++;
		}
	}
	for(int i = 0; i < 26; ++i){
		if(alp[i] == 1){
			return "NO";
		}
	}
	if(!flag && alp[26]==0){
		return "NO";
	}
	return "YES";
}

void solved(){
	int t, n;
	cin >> t;
	for(int i =0; i < t; ++i){
		cin >> n;
		string line;
		cin >> line;
		cout << happyLadybugs(line) << endl;
	}
}

int main(){
	solved();
	return 0;
}
