#include <bits/stdc++.h>

using namespace std;

void extraLongFactorials(int n){
	if (n == 0 || n == 1){
		cout << 1 << endl;
		return;
	}

	int res[900000];

	res[0] = 1;
	int c =0;
	int size = 1;

	int mul;
	for (int i = 2; i <= n;  ++i){
		for (int j = 0; j < size; ++j){
			mul = (res[j] * i) + c;
			res[j] = mul % 10;
			c = mul / 10;
		}

		while (c > 0){
			res[size++] = c % 10;
			c /= 10;
		}
	}
	for (int i = size-1; i >= 0; --i){
		printf("%d", res[i]);
	}
	cout << endl;
}

void solved(){
	int n;
	cin >> n;
	extraLongFactorials(n);
}

int main(){
	solved();
	return 0;
}
