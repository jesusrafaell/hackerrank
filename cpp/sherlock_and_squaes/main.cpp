#include <bits/stdc++.h>

using namespace std;

int squares(int a, int b){
	//ceil redondea hacia arriba
  int n = ceil(sqrt(a));
	//flor redondea hacia abajo
  int m = floor(sqrt(b));
  
  return m-n+1;
}

void solved(){
	int a,b;
	cin >> a >> b;
	int c = squares(a, b);
	cout << c << endl;
}

int main(){
	solved();
	return 0;
}
