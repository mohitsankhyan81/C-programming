#include <iostream>
using namespace std;

class Number{
  int a,b;
  public:
    void getdata(int a,int b){
      this->a=a;
      this->b=b;
    }

    void display(){
      cout<<a<<" "<<b<<endl;
    }
};
int main(){

  Number n;
  Number *num=&n;
  num->getdata(45,56);
  num->display();
  return 0;
}