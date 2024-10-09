
#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector<int> c) {
	int n = c.size();
	int cont = 0;
	for(int i =0; i < n-1; ++i){
		if(c[i] == 0){
			if(c[i+2] == 0 && c[i+1] == 0){
				i++;
			}
			cont++;
		}
	}
	return cont;
}

void solved(){
	int n;
	cin >> n ;
	vector<int> v(n);
	for (int i =0; i < n; ++i){
		cin >> v[i];
	}
	int r = jumpingOnClouds(v);
	cout << r << endl;
}

int main(){
	solved();
	return 0;
}
