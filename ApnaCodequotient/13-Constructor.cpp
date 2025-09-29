#include <iostream>
using namespace std;
class cont{
  private:
    int a;
    int b;
  public:
    cont(void);
    int display(void);
};
cont::cont(){
  a=1;
  b=2;
}

int cont::display(){
  return a+b;
}
int main(){
  cont a2;
  cout<<a2.display()<<endl;
  a2.display();
  return 0;
}