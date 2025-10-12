#include <iostream>
using namespace std;
class Demo{
  public:
    int x;
    void setx(int val){
      x=val;
    }
    void show(){
      cout<<"x = "<<x<<endl;
    }
};
void fun(Demo d){
  d.x=100;
  cout<<"inside fun (copy) : "<<d.x<<endl;
}
int main(){
  Demo d1;
  d1.setx(39);
  d1.show();
  fun(d1);
  
}