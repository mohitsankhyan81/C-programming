#include <iostream>
using namespace std;


class Number{
  private:
    int value;
  public:
    Number(int v){
      value=v;
    }
    void compare(Number &n){
      if(value==n.value){
        cout<<"value is equal to value"<<endl;
      }

      else if(value>n.value){
        cout<<"value is greater then valuw"<<endl;
      }

      else{
        cout<<"value is less then value"<<endl;
      }
    }

};

int main(){
  Number a1(45);
  Number n2(65);
  a1.compare(n2);
  return 0;
}