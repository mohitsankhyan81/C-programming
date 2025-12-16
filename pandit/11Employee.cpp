#include <iostream>
using namespace std;
class Employee{
  string name;
  int age;
  int salary;

  public:
    Employee(string name,int age,int salary){
      this->name=name;
      this->age=age;
      this->salary=salary;
    }

    void display(){
      cout<<"Name is "<<name<<"\nAge is "<<age<<"\nSalary is "<<salary<<endl;
    }
    ~Employee(){
      cout<<"Data tis stored";
    }
};
int main(){
  Employee e1("Mohit sankhyan",45,32425);
  e1.display();
  return 0;
}