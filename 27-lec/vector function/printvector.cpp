#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> vec = {1, 2, 3, 4, 5};
  vector<int> vec1(vec);
  for(int val1 : vec1){
    cout << val1 << endl;
  }
  return 0;
}
