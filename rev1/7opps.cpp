#include <iostream>
using namespace std;

  class Employee{
    private:
      string name;
      float salary;

    public:
      Employee(string name,float salary){
        this->name=name;
        this->salary=salary;
      }

      string getName(){
        return name;
      }

      float getSalary(){
        return salary;
      }

      void setName(string name){
        this->name=name;
      }
      void setSalary(float salary){
        this->salary=salary;
      }

      void displayDetails(){
        cout<<"Employee: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
      }
  };
int main(){
  Employee emp("Geek",10000.0f);
  emp.displayDetails();
  return 0;
}