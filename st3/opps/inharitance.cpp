#include <iostream>
using namespace std;

class Person{
  protected:
    string name;
    int age;
  public:
    Person(string name,int age){
      this->name=name;
      this->age=age;
    }
};

class Student:public Person{
  private:
    int roll;
    int marks;
  public:
    Student(string name,int age,int roll,int marks):Person(name,age){
      this->roll=roll;
      this->marks=marks;
    }

    void showdata(){
      cout<<"name is "<<name<<"\nage is "<<age<<"\nroll no is "<<roll<<"\nmarks is "<<marks<<endl;
    }
};
int main(){
  Student s("Mohit sankhyan",17,546,98);
  s.showdata();
  return 0;
}