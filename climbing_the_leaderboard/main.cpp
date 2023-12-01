#include <bits/stdc++.h>

using namespace std;

void printData(vector<int> ranked, vector<int> player){
	int n=ranked.size(), m = player.size();
	for (int i = 0; i < n; ++i){
		cout << ranked[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < m; ++i){
		cout << player[i] << " ";
	}
	cout << endl;
}

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player){
  auto last = unique(ranked.begin(), ranked.end());
  ranked.erase(last, ranked.end());
 	vector<int> result;
  for (int i = 0; i < player.size(); ++i) {
  	auto it = lower_bound(ranked.begin(), ranked.end(), player[i], greater<int>());
    result.push_back(distance(ranked.begin(), it) + 1);
  }
	return result;
}

void solved(){
	int n,m;
	cin >> n;
	vector<int> ranked(n);
	for (int i = 0; i < n; ++i){
		cin >> ranked[i];
	}
	cin >> m;
	vector<int> player(m);
	for (int i = 0; i < m; ++i){
		cin >> player[i];
	}
	climbingLeaderboard(ranked, player);
}

int main(){
	solved();
	return 0;
}
