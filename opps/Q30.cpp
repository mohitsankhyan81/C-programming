#include <iostream>
using namespace std;

class temp{
  public:
    temp(){
      cout<<"this is the constructor"<<endl;
    }
    ~temp(){
      cout<<"this is the deconstrutor"<<endl;
    }
};

int main(){
  temp a1;
  return 0;
}