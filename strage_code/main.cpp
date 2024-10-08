#include <bits/stdc++.h>

using namespace std;

long strangeCounter(long t) {
	long rem = 3;
  while (t > rem) {
  	t -= rem;
    rem *= 2;
  }
	return rem - t + 1;
}

void solved(){
	int t;
	cin >> t;
	long r = strangeCounter(t);
	cout << r << endl;
}

int main(){
	solved();
	return 0;
}
