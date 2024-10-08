#include <bits/stdc++.h>

using namespace std;

string superReducedString(string s) {
 for(int i =1; i < int(s.length()); ++i){
 		if(s[i] == s[i-1]){
			s.erase(i-1,2);
			i=0;
		}
	}
	if(s.length() == 0){
		return "Empty String";
	}
	return s;
}

void solved(){
	string s;
	cin >> s;
	string r = superReducedString(s);
	cout << r << endl;
}

int main(){
	solved();
	return 0;
}
