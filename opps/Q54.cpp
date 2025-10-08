#include <iostream>
using namespace std;

class Complex{
  int real;
  int imag;

  public:
    Complex(){
      real=0;
      imag=0;
    }
    Complex(int r,int i){
      real=r;
      imag=i;
    }

    Complex operator+(const Complex &c){
      return Complex(real+c.real,imag+c.imag);
    }

    Complex operator -(const Complex &c){
      return Complex(real-c.real,imag-c.imag);
    }

    void display(){
      if(imag>0){
        cout<<real<<"+"<<imag<<"i"<<endl;
      }
      else{
        cout<<real<<imag<<"i";
      }
    }
};
int main(){
  Complex c1(45,89);
  Complex c2(46,67);

  Complex c3=c1+c2;

  c3.display();

  Complex c4=c1-c2;
  c4.display();
  return 0;
}