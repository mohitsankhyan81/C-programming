#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int>vec;
  vec.emplace_back(6);
  vec.emplace_back(1);
  vec.emplace_back(6);
  vec.emplace_back(4);
  vec.emplace_back(2);
  vec.emplace_back(7);
  cout << vec.front() << " " << vec.back() << endl;

  cout<<endl;
 }