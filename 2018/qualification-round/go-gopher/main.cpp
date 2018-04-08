#include <iostream>  
#include <vector>  
#include <list>  
using namespace std; 

bool filled_row0(const vector<vector<int>> &a) {
    return a[0][0]+a[0][1]+a[0][2] == 3;
}

void shift_down(vector<vector<int>> &a) {
    for(int i=0; i<2; ++i) {
	a[i][0] = a[i+1][0];
	a[i][1] = a[i+1][1];
	a[i][2] = a[i+1][2];
    }
    a[2][0] = 0;
    a[2][1] = 0;
    a[2][2] = 0;
}

void solve(int A) {
    vector<vector<int>> mat = {{0,0,0}, {0,0,0}, {0,0,0}};
    int n = 0;
    for(;;) {
	cout << n+2 << " 2" <<endl;
	int x,y;
	cin >> x >> y;
	if (x == 0 && y == 0)
	    return;
	mat[x-1-n][y-1] = 1;
	if (filled_row0(mat) && n < A/3) {
	    shift_down(mat);
	    ++n;
	}
    }
}

int main() {
    //T test cases
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
	int A;
	cin >> A;
	solve(A);
    }
    return 0;
}
