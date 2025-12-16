#include <iostream>
using namespace std;

class student{
  string name;
  int age;
  public:
    student(string name,int age){
      this->name=name;
      this->age=age;
    }

    void display(){
      cout<<"Name is "<<name<<"\nAge is "<<age<<endl;
    }
};
int main(){
  student obj1("Mohit sankhyan",454);
  obj1.display();
  return 0;
}