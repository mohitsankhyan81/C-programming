#include <iostream>
using namespace std;
class complexs{
  private:
    int real,imag;
  public:
  complexs(){
    real=0;
    imag=0;
  }

  complexs(int r,int i){
    real=r;
    imag=i;
  }

  complexs operator+(const complexs &c ){
    return complexs(real+c.real,imag+c.imag);
  }
  complexs operator-(const complexs &c){
    return complexs(real+c.real,imag+c.imag);
  }
  void display(){
    if(imag>0){
    cout<<real+"+"<<imag<<"i";
  }
  else{
    cout<<real<<imag<<"i";
  }
}

};
int main(){
  int r,i;
  cin>>r>>i;
  complexs d1(r,i);
  cin>>r>>i;
  complexs d2(r,i);
  complexs d3,d4;
  d3=d1+d2;
  d4=d1-d2;
  d3.display();
  cout<<endl;
  d4.display();;
  return 0;
}