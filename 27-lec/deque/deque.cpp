#include <iostream>
#include <vector>
#include <list>
#include<deque>
using namespace std;
int main(){
  deque<int>d={2,3,4,5,6};
  for(int val:d){
    cout<<val<<" ";
  }
  cout<<endl;
  return 0;
}
