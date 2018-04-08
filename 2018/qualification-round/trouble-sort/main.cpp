#include <iostream>  
#include <vector>
using namespace std; 

string trouble_sort(vector<int> &vec) {
    //touble sort
    bool done = false;
    while (!done) {
	done = true;
	for (size_t i = 0; i < vec.size() - 2; ++i) {
	    if (vec[i] > vec[i+2]) {
		swap(vec[i], vec[i+2]);
		done = false;
	    }
	}
    }

    //find the error index
    int err_idx = -1;
    for (size_t i = 0; i < vec.size() - 1; ++i) {
	if (vec[i] > vec[i+1]) {
	    err_idx = i;
	    break;
	}
    }

    return err_idx == -1 ? "OK" : to_string(err_idx);
}


int main() {
    //T test cases
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
	cout << "Case #" << i << ": ";
	int N;
	cin >> N; //numbers
	vector<int> vec(N);
	for (int j = 0; j < N; ++j) {
	    cin >> vec[j];
	}
	cout << trouble_sort(vec) << endl;
    }
    return 0;
}
