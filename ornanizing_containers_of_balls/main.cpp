#include <bits/stdc++.h>

using namespace std;

string organizingContainers(vector<vector<int>> container) {
	//[i] = 0s
	//[j] = 1s
	int n = container.size();
	vector<int> sum(n);
	vector<int> row(n);
	for (int i =0; i < n; ++i){
		for (int j =0; j < n; ++j){
			sum[j]+=container[i][j];
			row[i]+=container[i][j];
		}
	}
	sort(row.begin(), row.end());
	sort(sum.begin(), sum.end());
	for(int i =0; i< n; ++i){
		if(row[i] != sum[i]){
			return "Impossible";
		}
	}
	return "Possible";
}

void solved(){
	int q,n;
	cin >> q;
	while(q){
		--q;
		cin >> n;
		vector<vector<int>> container(n);
		for (int i =0; i < n; ++i){
			vector<int> aux(n);
			for (int j =0; j < n; ++j){
				cin >> aux[j];
			}
			container[i]= aux;
		}
		string r = organizingContainers(container);
		cout << r << endl;
	}
}

int main(){
	solved();
	return 0;
}
