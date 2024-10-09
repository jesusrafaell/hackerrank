#include <bits/stdc++.h>
using namespace std;

//p 
//p0-d + p1-d  + p2-d ... + (pn-d > m)
//s? 
//return cont of p_i-d

int howManyGames(int p, int d, int m, int s) {
	int cont = 0;
	int sum = p;
	while(s >= sum){
		p = max(m, p-d);
		cont++;
		sum += p;
	}
	return cont;
}

void solved(){
	int p, d ,m,s;
	cin >> p >> d >> m >> s;
	int res = howManyGames(p, d, m, s);
	cout << res <<endl;
}

int main(){
	solved();
	return 0;
}
