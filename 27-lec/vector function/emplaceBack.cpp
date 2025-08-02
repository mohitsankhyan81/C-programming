#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int>vec;
  vec.emplace_back(6);
  vec.emplace_back(1);
  for(int val:vec){
    cout<<val<<" ";
  }
  cout<<endl;
}