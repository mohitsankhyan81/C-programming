#include <iostream>
using namespace std;
class b;
class a{
  private:
  int x;
  public:
  a(int x){
    this->x=x;
  }

 friend  void add(a,b);
};

class b{
  private:
  int y;
  public:
    b(int y){
      this->y=y;
    }  
    
    friend void add(a,b);
};

void add(a obj1,b obj2){
  cout<<obj1.x+obj2.y<<endl;
}
int main(){
  a obj1(34);
  b obj2(45);

  add(obj1,obj2);
  return 0;
}