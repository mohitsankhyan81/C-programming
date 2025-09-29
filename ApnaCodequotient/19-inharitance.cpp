#include <iostream>
using namespace std;
class bs{
  static const int x=15;
  public:
  void showx(){
    cout<<"This is the x "<<x<<endl;
  }
};

class ac:private bs{
  static const int y=10;
  public:
  void showy(){
    showx();
    cout<<"this is y "<<y;
  }
};
int main(){
  ac c;
  c.showy();
  return 0;
}