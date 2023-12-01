
#include <bits/stdc++.h>

using namespace std;

string fairRations(vector<int> B) {
	int n = B.size();
	int cont = 0, p = 0, q = 0, i =0;
	while(i<n){
		if(B[i] % 2 != 0){
			cont++;
			i++;
			if(cont % 2 == 0){
				q += ++p;
				p = 0;
			}
			while((B[i] % 2 == 0) && (i<n) && (cont % 2 != 0)){
				p++;
				i++;
			}
		}else{
			i++;
		}
	}
	if(cont % 2 == 0){
		int res = 2*q;
		stringstream stream;
		stream << res;
		string r;
		stream >> r;
		return r;
	}else{
		return "NO";
	}
}

void solved(){
	int n;
	cin >> n ;
	vector<int> B(n);
	for(int i =0; i < n; ++i){
		cin >> B[i];
	}
	string r = fairRations(B);
	cout << r << endl;
}

int main(){
	solved();
	return 0;
}
