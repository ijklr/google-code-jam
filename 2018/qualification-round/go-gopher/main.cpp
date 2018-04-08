#include <iostream>  
#include <vector>  
#include <list>  
using namespace std; 

int sum(const vector<vector<int>> &mat) {
    int s = 0;
    for(auto row: mat) {
	for(int e: row) {
	    s += e;
	}
    }
    return s;
}

bool filled_row0(const vector<vector<int>> &a) {
    return a[0][0]+a[0][1]+a[0][2] == 3;
}

bool shift(vector<vector<int>> &a) {
    if (filled_row0(a)) {
	for(int i=0; i<2; ++i) {
	    a[i][0] = a[i+1][0];
	    a[i][1] = a[i+1][1];
	    a[i][2] = a[i+1][2];
	}
	a[2][0] = 0;
	a[2][1] = 0;
	a[2][2] = 0;
	return true;
    }
    return false;
}


void solve(int A) {
    vector<int> row(3, 0);
    vector<vector<int>> mat(3, row);
    int n = 0;
    while (true) {
	cout << n+2 << " 2" <<endl;
	int x,y;
	cin >> x >> y;
	if (x == 0 && y == 0)
	    return;
	mat[x-1-n][y-1] = 1;
	if((n < A/3) && shift(mat)) {
	    ++n;
	}
    }
}

int main() {
    //T test cases
    int T, A;
    cin >> T >> A;
    for (int i = 1; i <= T; ++i) {
	solve(A);
    }
    return 0;
}
