#include <iostream> 
using namespace std;

class Employee{
  private:
    string name;
    int salary;
  public:
    Employee(string name,int salary){
      this->name=name;
      this->salary=salary;
    }

    void showdata(){
      cout<<"Name is "<<name<<"\nSalary is "<<salary<<endl; 
    }

    ~Employee(){
      cout<<"Object deleted"<<endl;
    }
};
int main(){
  Employee obj1("Mohit Sankhyan",4556);
  obj1.showdata();
  return 0;
}