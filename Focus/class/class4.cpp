#include <iostream>
using namespace std;

class Employee{
  int id;
  string name;
  int salary;

  public:
    Employee(int id,string name,int salary){
      this->id=id;
      this->name=name;
      this->salary=salary;
    }

    void display(){
      cout<<"Id is "<<id<<"\nName is "<<name<<"\nSalary is "<<salary<<endl;
    }
};
int main(){
  Employee e1(34,"Mohit Sankhyan",45634);
  e1.display();
  return 0;
}