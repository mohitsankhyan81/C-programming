#include <iostream>
using namespace std;
class number{
  static int n;
  public:
    void count(){
      ++n;
      cout<<"\n n = "<<n;
    }
};
int number::n=0;
int main(){
  number a,b,c;
  a.count();
  b.count();
  c.count();
  return 0;
}