//protected inhartance

#include <iostream>
using namespace std;
class bs{
  protected:
  static const int x=45;
  public:
    void showx(){
      cout<<"this is the x "<<x<<endl;
    }
};

class ac:protected bs{
  static const int y=30;
  public:
  void showy(){
    cout<<"member of base class in derived: "<<x<<endl;
    cout<<"member of drived class: "<<y;
  }
};
int main(){
  ac a;
  a.showy();
  return 0;
}