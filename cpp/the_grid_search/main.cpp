#include <bits/stdc++.h>

using namespace std;

int inGrid(const string str1, const string str2, int p , int n, int m) {
   for (int i = p; i + n <= m; ++i) {
        int j;
        for (j = 0; j < n; ++j) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == n) {
					return i;
				}
    }
    return -1; 
}

bool matchPattner(vector<string> G, vector<string> P, int x) {
	int m = G[0].length(), n = P[0].length();
	if((int(G.size()) - x) < int(P.size())){
		return false;
	}
	int index = -1;
 	for (int i = 0; i < int(G[x].length()); ++i){
		index = inGrid(G[x], P[0], i, n, m);
		if(index == -1){
			return false;
		}else{
			i = index;
		}
		int j;
		for(j = 1; j < int(P.size()); ++j){
		 	index = inGrid(G[x+j], P[j], i, n, m);
			if(index == -1){
				break;
			}else{
				if(index != i){
					break;
				}
			}
		}
		if(j == int(P.size())){
			return true;
		}
	}
  return false;
}

string gridSearch(vector<string> G, vector<string> P) {
	for(int i = 0; i < int(G.size()); ++i){
		if (matchPattner(G, P, i)){
			return "YES";
		}
	}
	return "NO";
}

void solved(){
	int t;
	cin >> t;
	for(int i =0; i < t; ++i){
		int r, c;
		cin >> r >> c;
		vector<string> G(r);
		for(int i =0; i < int(r); ++i){
			cin >> G[i];
		}
		cin >> r >> c;
		vector<string> P(r);
		for(int i =0; i < int(r); ++i){
			cin >> P[i];
		}
		string res = gridSearch(G,P);
		cout << "Case #" << i+1 << endl;
		cout << res << endl;
	}
}

int main(){
	solved();
	return 0;
}
