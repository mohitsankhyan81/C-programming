#include <iostream>
using namespace std;

class point{
  int a;
  int b;

  public:
    point(int x,int y){
      a=x;
      b=y;
    }

    void operator -(){
      a=-a;
      b=-b;
    }

    void display(){
      cout<<"x is "<<a<<" y is "<<b<<endl;
    }
};

int main(){
  point p(45,-34);
  cout<<"before"<<endl;
  p.display();
  cout<<"after"<<endl;
  -p;
  p.display();
  return 0;
}