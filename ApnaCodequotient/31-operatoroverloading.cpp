#include <iostream>
using namespace std;

class Unaryop{
  int a;
  int b;
  int c;

  public:
    void readdata(int x,int y,int z){
      a=x;
      b=y;
      c=z;
    }
    void show(void){
      cout<<a<<" ";
      cout<<b<<" ";
      cout<<c<<endl;
    }
    void operator -(){
      a=-a;
      b=-b;
      c=-c;
    }
};


int main(){
  Unaryop u;
  u.readdata(5,-13,13);
  cout<<"before ";
  u.show();
  -u;
  cout<<"after : ";
  u.show();
  return 0;
}