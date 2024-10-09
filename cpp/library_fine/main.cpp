#include <bits/stdc++.h>

using namespace std;
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
	if (y2 > y1){
		return 0;
	}else if (y1 > y2){
		return 10000;
	}

	if (m1 > m2){
		return (m1 - m2) * 500;
	}else if(m2 > m1){
		return 0;
	}
	if(d1 > d2){
		return (d1 - d2) * 15;
	}

	return  0;
}

void solved(){
	int d1,  m1,  y1,  d2,  m2,  y2;
	cin >> d1  >> m1  >> y1  >> d2 >> m2 >> y2;
	int c = libraryFine(d1,  m1,  y1,  d2,  m2,  y2);
	cout << c << endl;
}

int main(){
	solved();
	return 0;
}
