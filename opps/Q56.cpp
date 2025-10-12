#include <iostream>
using namespace std;

class Complex{
  int rear;
  int imag;

  public:
    Complex(){
      rear=0;
      imag=0;
    }

    Complex(int r,int i){
      rear=r;
      imag=i;
    }

    Complex operator+(const Complex &c){
      return Complex(rear+c.rear,imag+c.imag);
    }

    Complex operator-(const Complex &c){
      return Complex(rear-c.rear,imag-c.imag);
    }

    void display(){
      if(imag>0){
        cout<<rear<<"+"<<imag<<"i"<<endl;
      }
      else{
        cout<<rear<<imag<<"i";
      }
    }
};


int main(){
  Complex c1(45,11);
  Complex c2(78,22);

  c1.display();
  c2.display();

  Complex c3=c1+c2;
  c3.display();

  Complex c4=c1-c2;
  c4.display();
  return 0;
}