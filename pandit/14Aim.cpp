#include <iostream>
using namespace std;

class base{
  protected:
  int a;
  int b;

  public:
    base(int a,int b){
      this->a=a;
      this->b=b;
    }
};

class drived:public base{
  public:
    drived(int a,int b):base(a,b){

    };

    void display(){
      cout<<a<<" "<<b<<endl;
    }
};

int main(){
  drived d1(45,56);
  d1.display();
  return 0;
}