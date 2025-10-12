#include <iostream>
using namespace std;

class Employee{
  int Emp_id;
  float salary;

  public:
    void getdata(int e,float s){
      Emp_id=e;
      salary=s;
    }
    void showdata(){
      cout<<"Employee id: "<<Emp_id;
      cout<<"\nSalary: Rs. "<<salary;
    }
};
int main(){
  Employee e;
  Employee *etr=&e;
  etr->getdata(4534,6545.35);
  etr->showdata();
  return 0;
}