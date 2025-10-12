#include <iostream>
using namespace std;

class number{
  private:
    static int count;
  public:
    void countint(){
      ++count;
      cout<<"count is "<<count<<endl;
    }
};

int number::count=0;
int main(){
  number a,b,c;
  a.countint();
  b.countint();
  c.countint();
  return 0;
}