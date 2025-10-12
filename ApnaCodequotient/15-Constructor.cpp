#include <iostream>
using namespace std;

class circle{
  int a;
  int b;
  public:
    circle(int a1,int b1){
      a=a1;
      b=b1;
    }
    circle(circle &l){//copy constructor
      a=l.a;
      b=l.b;
    }
    int display(){
      return a+b;
    }
};
int main(){
  circle c1(1,2);
  circle c2(c1);
  cout<<c1.display()<<endl;
  cout<<c2.display();
  return 0;
}