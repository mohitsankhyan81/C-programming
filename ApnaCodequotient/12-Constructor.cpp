#include <iostream>
using namespace std;
class Construct{
  private:
    int radius;
  public:
    Construct(){//default comstructor
      radius=0;
    }
    Construct(double r){//Parameterized constructor
      radius=r;
    }
    Construct(Construct &c){
      radius=c.radius;
    }

    double showarea(){
      return radius;
    }
};

int main(){
  Construct c1;
  Construct c2(5.6);
  Construct c3(c2);
  Construct c4=c2;

  cout<<"area = "<<c2.showarea()<<endl;
  cout<<"area = "<<c1.showarea()<<endl;
  cout<<"area = "<<c3.showarea()<<endl;
  cout<<"area = "<<c4.showarea()<<endl;
  return 0;
}