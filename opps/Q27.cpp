#include <iostream>
using namespace std;

class Person{
  public:
    string name;
    int age;

    void getdata(){
      name="mohit";
      age=45;
    }

    void display1(){
      cout<<"Name is "<<name<<endl;
      cout<<"age is "<<age<<endl;
    }
};

class Employee:public Person{
  public:
    int salary;
    string designation;

    void getdetails(){
      salary=452352;
      designation="good";
    }

    void display(){
      display1();
      cout<<"Salary is "<<salary<<endl;
      cout<<"designation is "<<designation<<endl;
    }
};

int main(){

  Employee e1;
  e1.getdata();
  e1.getdetails();
  e1.display();
  return 0;
}
