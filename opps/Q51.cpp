#include <iostream>
using namespace std;

class number{
  int x;
  public:
  number(int X){
    x=X;
  }

  void operator ++(){
    ++x;
  }

  void operator ++(int){
    x++;
  }

  void display(){
    cout<<"x "<<x<<endl;
  }

};

int main(){
  number n(5);
  ++n;
  n.display();
  n++;
  n.display();
  return 0;
}