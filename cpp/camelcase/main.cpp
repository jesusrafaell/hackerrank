#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
	int n = s.length();
	int c = 1;
	for(int i =1; i < n; ++i){
		if(isupper(s[i])){
			c++;
		}
	}
	return c;
}

void solved(){
	string s;
	cin >> s;
	int r = camelcase(s);
	cout << r << endl;
}

int main(){
	solved();
	return 0;
}
