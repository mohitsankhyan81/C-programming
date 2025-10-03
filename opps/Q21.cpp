#include <iostream>
using namespace std;

class b;

class a{
  private:
    int x;
  public:
    a(int X){
      x=X;
    }
    friend int add(a A,b B);
};

class b{
  private:
    int y;
  public:
    b(int Y){
      y=Y;
    }

    friend int add(a A,b B);
};

int add(a A,b B){
  return A.x+B.y;
}

int main(){
  a A(50);
  b B(20);

  cout<<"Sum is "<<add(A,B)<<endl;

  return 0;
}