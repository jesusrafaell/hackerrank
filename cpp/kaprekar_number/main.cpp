#include <bits/stdc++.h>

using namespace std;

bool isKaprekar(long i){
	string s = to_string((long)i*(long)i);
	long sub = s.size()/2;
	int x = atoi(s.substr(0, sub).c_str()) + atoi(s.substr(sub, s.size()).c_str());
	if(x == i) return true;
	return false;
}

void kaprekarNumbers(int p, int q) {
	bool t= false;
	for (int i = p; i <= q; ++i){
		bool x = isKaprekar(i);
		if(!t && x){
			t =true;
		}
		if(x){
			cout << i << " ";
		}
	}
	if (!t) cout << "INVALID RANGE";
	cout << endl;
}

void solved(){
	int p,q;
	cin >> p >> q;
	kaprekarNumbers(p, q);
}

int main(){
	solved();
	return 0;
}
