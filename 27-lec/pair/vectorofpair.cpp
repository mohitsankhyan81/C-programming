#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main() {
  vector<pair<int,int>>vec={{1,2},{2,3}};
  vec.push_back({2,8});
  for(pair<int,int>p:vec){
    cout<<p.first<<endl;
    cout<<p.second<<endl;
  }
    return 0;
}
