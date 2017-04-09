#include <iostream>
#include <sstream>

using namespace std;

int main()
{                             
  ios::sync_with_stdio(false);
  int T, K;
  cin >> T;
  int sum = 0;
  for(int i=0; i<T; ++i) {
    
    cin >>K;
    sum += K;
  }
  cout<<"sum="<<sum<<endl;
}