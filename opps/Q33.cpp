#include <iostream>
using namespace std;


class Complex{
  private:
    int real;
    int imag;

  public:
    Complex(int r,int i){
      real=r;
      imag=i;
    }

    Complex operator +(const Complex &c){
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
        cout<<real<<imag;
      }
    }


};

int main(){

  Complex c1(20,34);
  Complex c2(50,21);
  Complex c3=c1+c2;
  Complex c4=c1-c2;
  c3.display();
  c4.display();
  return 0;
}