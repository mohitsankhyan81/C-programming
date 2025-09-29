#include <iostream>
using namespace std;

class rectangle{
  private:
    int a;
    int b;
  public:
    rectangle(int a1,int b1){
      a=a1;
      b=b1;
    }

    int display(){
      return a+b;
    }
};
int main(){
  rectangle z(2,3);
  cout<<z.display();
  return 0;
}