#include <iostream>
using namespace std;

class over{
  private:
    int a;
    int b;
  public:
    over(int a1,int b1){
      a=a1;
      b=b1;
    }


    over operator +(over o){
      over temp(0,0);
      temp.a=a+o.a;
      temp.b=b+o.b;
      return temp;
    }

    void display(){
      cout<<"a is "<< a<<endl;
      cout<<"b is "<<b<<endl;
    }


};
int main(){
  over o1(45,34);
  over o2(45,75);

  over o3=o1+o2;

  o3.display();
  return 0;
}