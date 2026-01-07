//first i make a default constructor

#include <iostream>
using namespace std;

class number{
  private:
    int a;
    int b;
  public:
    number(){
      a=10;
      b=20;
    }

    void display(){
      cout<<a<<" "<<b<<endl;
    }
};

int main(){
  number n1;
  n1.display();
  return 0;
}