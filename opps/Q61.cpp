#include <iostream>
using namespace std;

class co{
  int area;
  double radius;
  public:

    co(){
      cout<<"This is a constructor"<<endl;
      area=45;
      radius=46.2;
    }

    ~co(){
      cout<<"This is an constructor"<<endl;
    }

    void showdata(){
      cout<<radius*radius*3.14159<<endl;
      cout<<area<<" " <<radius;
    }
};
int main(){
  co *p1;
  p1=new co;
  p1->showdata();
  delete p1;
  return 0;
}