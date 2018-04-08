#include <iostream>  
using namespace std; 


int main() {
    //T test cases
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
	cout << "Case #" << i << ": ";
	int N;
	cin >> N; //numbers
	cout <<"(N="<<N<<")\n";
	
	for (int j = 0; j < N; ++j) {
	    int d;
	    cin >> d;
	    cout << d << " ";
	}
	cout << endl;
    }
    return 0;
}
