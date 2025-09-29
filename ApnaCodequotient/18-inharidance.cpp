//public inharit

#include <iostream>
using namespace std;
class ac{
  static const int x=15;
  public:
  void showx(){
    cout<<"This is x"<<x<<endl;
  }
};

class bc:public ac{
  static const int y=30;
  public:
  void showy(){
    cout<<"this is y"<<y<<endl;
  }
};
int main(){
  bc b;
  b.showx();
  b.showy();
  return 0;
}