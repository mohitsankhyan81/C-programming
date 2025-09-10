//polymorphism
//functoion overloading
#include <iostream>
using namespace std;


class mohit{
  public:
  void fun(){
    cout<<"i am a function with no arguments"<<endl;
  }
  void  fun(int x){
    cout<<"I am function with int  argument"<<endl;
  }
  void fun(double x){
    cout<<"I am a function with double arguments"<<endl;     
  }
};
int main(){
  mohit obj;
  obj.fun();
  obj.fun(3);
  obj.fun(2.3);
}