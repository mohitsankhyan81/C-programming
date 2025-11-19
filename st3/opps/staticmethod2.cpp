#include <iostream>
using namespace std;

class Counts{
  private:
    static int c;

  public:
    void count(){
      ++c;
      cout<<c<<endl;
    }
};

int Counts::c=0;
int main(){
  Counts a,b,c;
  a.count();
  b.count();
  c.count();
  return 0;
}