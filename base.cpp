#include <iostream>  
#include <sstream>
using namespace std; 


int main() {
    //T test cases
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
	cout << "Case #" << i << ": "<<endl;
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
