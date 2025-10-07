#include <iostream>
using namespace std;

class Cirle{
  int radius;
  static int serialno;

  public:
    Cirle(int r){
      radius=r;
      serialno++;
    }

    static void serailno(){
      cout<<"sr no "<<serialno<<endl;
    }
    void display(){
      cout<<"radius "<<radius<<endl;
    }
};


int Cirle::serialno=0;
int main(){
  Cirle c1(50);
  c1.serailno();
  c1.display();

  Cirle c2(100);
  c2.serailno();
  c2.display();
  return 0;
}