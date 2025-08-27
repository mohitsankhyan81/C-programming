//basic
//There are Three acess modifiers like private, public,protected
#include <iostream>
#include <string>
using namespace std;

class Teacher{
  public:
  //properties //attributes
  string name;
  string dept;
  string subject;
  int salary;
  //methods /member fuction
  void changeDept(string newDept){
    dept=newDept;
  }
};



int main(){
  Teacher t1;
  t1.name="mohit Sankhyan";
  t1.dept="bca";
  t1.subject="C++";
  t1.salary = 3572;
  cout<<t1.name<<endl;
  cout<<t1.dept<<endl;
  cout<<t1.subject<<endl;
  cout<<t1.salary<<endl;
  return 0;
}