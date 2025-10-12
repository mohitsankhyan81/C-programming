#include <iostream>
using namespace std;

class mycomplex{
  private:
  int rear;
  int imag;
  public:
  mycomplex(int r=0,int i=0){
    rear=r;
    imag=i;
  }

  mycomplex operator +(mycomplex const &obj)const{
    mycomplex res;
    res.rear=rear+obj.rear;
    res.imag=imag+obj.imag;
    return res;
  }

  void display(){
    cout<<rear<<", i"<<imag<<endl;
  }
};
int main(){
  mycomplex c1(43,23);
  mycomplex c2(32,21);
  mycomplex c3=c1+c2;
  c3.display();
}