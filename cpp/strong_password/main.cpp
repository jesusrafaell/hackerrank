
#include <bits/stdc++.h>

using namespace std;

string sc = "!@#$%^&*()-+";

bool isSpecialChar (char s){
	for(int i =0; i < int(sc.length()); ++i){
		if(s == sc[i]){
			return true;
		}
	}
	return false;
}

int minimumNumber(int n, string password) {
	int nu=1, l=1, u=1, s=1;
	for(int i = 0; i < n; ++i){
		if(isupper(password[i]) && u){
			u = 0;
		}else if(islower(password[i]) && l){
			l = 0;
		}else if(isdigit(password[i]) && nu){
			nu = 0;
		}else if(isSpecialChar(password[i]) && s){
			s=0;
		}
	}
	int res = u + l + nu + s;
	if(n < 6){
		int diff = 6-n;
		if(res < diff){
			res = diff;
		}
	}
	return res;
}

void solved(){
	int n;
	string s;
	cin >> n >> s;
	int r = minimumNumber(n,s);
	cout << r << endl;
}

int main(){
	solved();
	return 0;
}
