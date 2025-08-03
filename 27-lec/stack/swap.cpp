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

  stack<int>s1;
  s1.swap(a);
  cout<<"s size :"<<a.size()<<endl;
  cout<<"s1 size:"<<s1.size()<<endl;
    return 0;
}
