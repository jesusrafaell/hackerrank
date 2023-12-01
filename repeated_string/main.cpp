#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
	int m = s.size();
	long a = 0;
	for (int i = 0; i < m; ++i){
		if('a' == s[i]){
			a++;
		}
	}
	long d = n / m;
	long res = d * a;
	if(n % m != 0){
		int diff = n - m * d;
		for (int i = 0; i < diff; ++i){
			if('a' == s[i]){
				res++;
			}
		}
	}

	return res;
}

void solved(){
	string s;
	long n;
	cin >> s >> n;
	long r = repeatedString(s, n);
	cout << r << endl;
}

int main(){
	solved();
	return 0;
}
