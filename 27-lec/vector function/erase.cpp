#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> vec = {1, 2, 3, 4, 5};
  vec.erase(vec.begin()+2);
  vec.insert(vec.begin()+2,100);
  for(int val : vec){
    cout << val<< endl;
  }
  return 0;
}
