#include <iostream>
using namespace std;

class Number{
  protected:
  int a,b;
  public:
    Number(int a,int b){
      this->a=a;
      this->b=b;
    }

    virtual void display()=0;
};

class Sum:public Number{
  public:
    Sum(int a,int b):Number(a,b){

    }

    void display() override{
      cout<<"Sum is "<<a+b<<endl;
    }

};

int main(){

  Number* n;
  Sum s(45,34);
  
  n=&s;
  n->display();
  
  return 0;
}