#include <iostream>
using namespace std;

class Calculator{
  int a;
  int b;
  public:
    void getdata(){
      cin>>a>>b;
    }
    int add(){
      return a+b;
    }
    int sub(){
      return a-b;
    }
    int mul(){
      return a*b;
    }
    int div(){
      return a/b;
    }
};
int main(){
  Calculator n1;
  n1.getdata();
  cout<<n1.add()<<endl;
  cout<<n1.sub()<<endl;
  cout<<n1.mul()<<endl;
  cout<<n1.div()<<endl;
  return 0;
}