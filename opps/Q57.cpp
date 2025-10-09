#include <iostream>
using namespace std;


class changesign{
  int a;
  int b;

  public:

    changesign(){
      a=0;
      b=0;
    }
    changesign(int a,int b){
      this->a=a;
      this->b=b;
    }

    void operator-(){
      a=-a;
      b=-b;
    }
    
    void display(){
      cout<<a<<" "<< b<<endl;
    }
  };
int main(){
  changesign c(45,46);
  cout<<"before "<<endl;
  c.display();
  -c;
  c.display();

  return 0;
}