#include <iostream>
using namespace std;
class my{
  int a;
  int b;
  public:
    my(){
      a=1;
      b=10;
    }

    void display(){
      cout<<a<<" "<<b<<endl;
    }

};
int main(){
  my *a;
  a=new my;
  a->display();
  delete a;
  return 0;
}