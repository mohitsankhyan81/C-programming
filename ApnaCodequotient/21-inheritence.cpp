//type of inhartance
//single inhartance
//multilevel inhartance
//multiple inhartance
//hierarchical inhartace
//hybrid inharitance

//sighe inhartance
#include <iostream>
using namespace std;

class Employee{
  protected:
    int Emp_id;
};

class salary:public Employee{
  float amt;
  public:
    void getdata(int e,float s){
      Emp_id=e;
      amt=s;
    }
    void show_salary(){
      cout<<"Salary of Employee id "<<Emp_id<<endl;
      cout<<"AMT is the "<<amt<<endl;
    }
};
int main(){
  salary s1;
  s1.getdata(34,34.45);
  s1.show_salary();
  return 0;
}