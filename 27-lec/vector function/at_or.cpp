#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int>vec;
  vec.emplace_back(6);
  vec.emplace_back(1);
  vec.emplace_back(6);
  vec.pop_back();
  for(int val:vec){
    cout<<val<<" "<<vec.at(0);
  }
  cout<<endl;
 }