#include <bits/stdc++.h>

using namespace std;

bool comparition(string left, string right) {
    if (left.length() == right.length()) return left < right;
    else return left.length() < right.length();
}

vector<string> bigSorting(vector<string> unsorted) {
	sort(unsorted.begin(), unsorted.end(), comparition);
	return unsorted;
}

void solved(){
	int n;
	cin >> n;
	vector<string> arr(n);
	for (int i =0; i < n; ++i){
		cin >> arr[i];
	} 
	vector<string> r = bigSorting(arr);
	for (int i =0; i < n; ++i){
		cout << r[i] << endl;;
		cout << endl;
	} 
}

int main(){
	solved();
	return 0;
}
