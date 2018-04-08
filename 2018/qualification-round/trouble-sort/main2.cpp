#include <iostream>  
#include <vector>
#include <algorithm>
using namespace std; 

string trouble_sort(const vector<int> &vec) {

    vector<int> even, odd, comb(vec.size());
    even.reserve(vec.size()/2);
    odd.reserve(vec.size()/2);

    for (size_t i = 0; i < vec.size(); ++i) {
	if (i%2) {
	    odd.push_back(vec[i]);
	} else {
	    even.push_back(vec[i]);
	}
    }
    sort(begin(even), end(even));
    sort(begin(odd), end(odd));

    auto ei = begin(even);
    auto oi = begin(odd);
    for (size_t i = 0; i < vec.size(); ++i) {
	if (i%2) {
	    comb[i] = *oi;
	    ++oi;
	} else {
	    comb[i] = *ei;
	    ++ei;
	}
    }

    for (size_t i = 0; i < comb.size() -1; ++i) {
	if (comb[i] > comb[i+1]) 
	   return to_string(i); 
    }
    return "OK";
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
