//Multiple inheritance

#include <iostream>
using namespace std;
class red{
  public:
    red(){
      cout<<"Red +";
    }
};
class yellow{
  public:
  yellow(){
    cout<<" Yellow ";
  }
};

class orange:public red,public yellow{
  public:
    orange(){
      cout<<"=orange ";
    }
};
int main(){
  orange o1;
  return 0;
}