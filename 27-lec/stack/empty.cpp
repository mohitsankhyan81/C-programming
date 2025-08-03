#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
using namespace std;

int main() {
  stack<int>a;
  a.push(1);
  a.push(3);
  a.push(5);
  a.push(7);
  a.push(9);

  while(!a.empty()){
     cout<<a.top()<<endl;
     a.pop();
  }
cout<<endl;
    return 0;
}
