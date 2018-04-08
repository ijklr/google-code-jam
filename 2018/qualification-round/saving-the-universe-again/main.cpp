#include <iostream>  
using namespace std; 

int damage(const string &p) {
    int strength = 1;
    int d = 0;

    for (char c:p) {
	switch(c) {
	    case 'C': strength *= 2; 
		      break;
	    case 'S': d += strength;
		      break;
	    default: cout << "something wrong with P.. char=="<<c<<endl;
	}
    }
    return d;
}

bool swap1(string &p) {
    if (p.size() <= 1)
	return false;
    for (int i = p.size() - 1; i>=1; i--) {
	if (p[i] == 'S' && p[i-1] == 'C') {
	    swap(p[i], p[i-1]);
	    return true;
	}
    }
    return false;
}


int main() {
    //T test cases
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
	cout << "Case #" << i << ": ";
	int D;
	string P;
	cin >> D; //damage
	cin >> P; //robot's program
	int ans = 0;
	while(damage(P) > D) {
	    bool swapped = swap1(P);
	    if(swapped) { 
		ans++;
	    }
	    else break;
	}
	if(damage(P) > D) cout << "IMPOSSIBLE\n";
	else cout << ans << endl;
    }
    return 0;
}
