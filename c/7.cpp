#include <iostream>
using namespace std;
class Person{
  protected:
    string name;
    int age;
  public:
    Person(){
      name="";
      age=0; 
    }
    Person(string n,int a){
      name=n;
      age=a;
    }
};
class Employee:public Person{
  protected:
    int salary;
  public:
    Employee(){
      salary=0;
    }
    Employee(string n,int a,int s):Person(n,a){
      salary=s;
    }
};
class Manager:public Employee{
  private:
    int bonus;
  public:
    Manager(){
      bonus=0;
    }
    Manager(string n,int a,int s,int b):Employee(n,a,s){
      bonus=b;
    }

    void inputdata(){
      cin>>name;
      cin>>age;
      cin>>salary;
      cin>>bonus;
    }

    void totalsalary(){
      int totalsalary=salary+bonus;
      
      cout<<"Total salary "<<totalsalary<<endl;
    }
};
int main(){
  Manager m1;
  m1.inputdata();
  m1.totalsalary();
  return 0;
}