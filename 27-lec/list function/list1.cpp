#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main(){
  list<int> l={2,3,4,5,6};
  for(int val:l){
    cout<<val<<" ";
  }
  cout<<endl;
  return 0;
}
