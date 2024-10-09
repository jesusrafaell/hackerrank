#include <bits/stdc++.h>

using namespace std;

int findDigits(int n){
	int cont = 0;
	int m = n, r = n;
	do {
		r = m % 10;
		if(r != 0 && n % r == 0  ){
			cont ++;
		}
		m /= 10;
	}while(m);

	return cont;
}

void solved(){
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i){
		int m;
		cin >> m;
		int res = findDigits(m);
		cout << res << endl;
	}
}

int main(){
	solved();
	return 0;
}
