#include <bits/stdc++.h>

using namespace std;

bool cellObstacle(const vector<vector<int>>& obstacles, int r_a, int c_a) {
    vector<int> cell = {r_a, c_a};
    return binary_search(obstacles.begin(), obstacles.end(), cell);
}

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
	sort(obstacles.begin(), obstacles.end());
	int count = 0;
	//left
	bool t = false, b = false, l = false, r = false, tl = false, tr= false, bl=false, br=false;
	int r_asc = r_q+1, c_asc = c_q+1;
	int r_des = r_q-1, c_des = c_q-1;
	while((!t || !b || !l || !r || !tl || !tr || !bl || !br) && (r_asc <= n || c_asc <= n || r_des >= 1 || c_des >= 1)){
		//top
		if(r_asc <= n){
			//top line
			if(!t){
				if(!cellObstacle(obstacles, r_asc, c_q)) count++; 
				else t=true;
			}
			//diagonalleft {top} 
			if(c_des >= 1 && !tl){
				if(!cellObstacle(obstacles, r_asc, c_des)) count++; 
				else tl=true;
			}
			//diagonalright {top}
			if(c_asc <= n && !tr){
				if(!cellObstacle(obstacles, r_asc, c_asc)) count++; 
				else tr=true;
			}
		}

		//bottom 
		if(r_des >= 1){
			//boootom line
			if(!b){
				if(!cellObstacle(obstacles, r_des, c_q)) count++;
				else b=true;
			}
			//diagonalleft {bottom}
			if(c_des >= 1 && !bl){
				if(!cellObstacle(obstacles, r_des, c_des)) count++;
				else bl =true;
			}
			//diagonalright {bottom}
			if(c_asc <= n && !br){
				if(!cellObstacle(obstacles, r_des, c_asc)) count++;
				else br =true;
			}
		}

		//left
		if(c_des >= 1 && !l){
			if(!cellObstacle(obstacles, r_q, c_des)) count++;
			else l=true;
		}

		//right
		if(c_asc <= n && !r){
			if(!cellObstacle(obstacles, r_q, c_asc)) count++;
			else r=true;
		}

	 	r_asc++;
		c_asc++;
	 	r_des--;
		c_des--;
	}

	return count;
}


void solved(){
	//n=matrix[n,n];
	//k=number ostacles

	int n, k, r_q, c_q;
	cin >> n >> k;
	cin >> r_q >> c_q;
	vector<vector<int>> obstacles(k);
	for(int i =0; i < k; ++i){
		vector<int> p(2);
		cin >> p[0];
		cin >> p[1];
		obstacles[i] = p; 
	}
	int r = queensAttack(n, k ,r_q, c_q, obstacles);
	cout << r << endl;
}

int main(){
	solved();
	return 0;
}
