#include <iostream>
using namespace std;
class b;
class a{
  private:
    string name;

  public:
    a(string n){
      name=n;
    }

    friend void display(a,b);
};


class b{
  private:
    int age;
  public:
    b(int a){
      age=a;
    }

    friend void display(a,b);
};


void display(a obj1,b obj2){
  cout<<"name is "<<obj1.name<<endl;
  cout<<"age is "<<obj2.age<<endl;
}


int main(){
  a obj1("mohit");
  b obj2(34);
  display(obj1,obj2);
  return 0;
}