#include <bits/stdc++.h>

using namespace std;

int chocolateFeast(int n, int c, int m) {
	int cont = 0;
	int x = n/c;
	cont += x;
	while(x >= m){
		int d = x / m;
		cont += d;

		cout << "_X" << x << endl;

		cout << "Eat" << d << endl;

		x += d*(1-m);

		cout << "Have" << x << endl;
	}
	return cont;
}

void solved(){
	int t,n,c,m;
	cin >> t;
	for (int i = 0; i < t; ++i){
		cin >> n >> c >> m;
		int res = chocolateFeast(n, c,m);
		cout << res << endl;
	}
}

int main(){
	solved();
	return 0;
}
