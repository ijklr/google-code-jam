#include <iostream>
#include <vector>
#include <set>

using namespace std;
using VV = vector<vector<int>>;
int N = 4;



int longest_circle(int i, VV vv)
{
  int distance[N]= {0};
  distance[i] = -1;
  bool checked[N] = {false};
  check[i] = true;
  
  vector<int> v;
  for(int step =1;v.size();++step) {
    
    bool keep_going = false;

    for(auto j:vv[i]){
 	  	if(!checked[j]) {
         checked[j] = true;
         distance[j] = step;
         keep_going = true;         
 	 		}
   	}
  }
  

  return 0;
}



int main()
{                          
  VV graph(N, vector<int>());
  graph[0].push_back(1);
  graph[1].push_back(0);
	graph[2].push_back(1);
	graph[3].push_back(2);

	



  cout <<"hello"<<endl;
  cout <<"myaoshu"<<endl;
}