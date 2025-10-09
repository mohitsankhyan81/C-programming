#include <iostream>
using namespace std;

class make{
  int age;
  string name;

  public:
    make(int a,string b){
      age=a;
      name=b;
    }

    void display(){
      cout<<age<<" "<<name<<endl;
    }
};

int main(){
  make *m=new make(45,"Mohit sankhyan");
  m->display();
  delete m;
  return 0;
}