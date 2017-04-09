#include <iostream>

using namespace std;
const int M = 2505;
int main()
{                             
  ios::sync_with_stdio(false);
  int T;
  cin >> T;
  for(int i=1; i<=T; ++i) {
    bool odd[M] = {false};
    int K;
    cin >>K;
    for(int j=0; j<2*K-1; ++j) {
      for(int k=0; k<K; ++k) {
        int kk;
        cin >> kk;
        odd[kk] = !odd[kk];
      }
    }
    cout<<"Case #"<<i<<":";
    for(int j=0; j<M; ++j) {
      if(odd[j]) cout <<" "<<j;
    }
    cout <<endl;     
  }
}