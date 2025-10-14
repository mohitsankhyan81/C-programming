#include <iostream>
using namespace std;

class sign{
  private:
    int a;
    int b;
  public:
    sign(int a,int b){
      this->a=a;
      this->b=b;
    }

    void operator-(){
      a=-a;
      b=-b;
    }

    void display(){
      cout<<a<<" "<<b<<endl;
    }
    
};
int main(){
  sign s1(46,45);
  s1.display();
  -s1;
  s1.display();
  return 0;
}