#include <iostream>
using namespace std;

class person{
  protected:
    string name;
    int age;
  public:
  person(){}
    person(string name,int age){
      this->name=name;
      this->age=age;
    }

    virtual void showinput(){
      cout<<"Name is "<<name<<endl;
      cout<<"Age is"<<age<<endl;
    } 
};

class student:public person{
  private:
    int studentID;
    int Class;

  public:
  student(string name,int age,int studentID,int Class) : person(name,age) {
    this->studentID=studentID;
    this-> Class=Class;
  } 

  void showinput() override{
    cout<<"Name is "<<name<<endl;
    cout<<"Age is "<<age<<endl;
  } 

  void display(){
    cout<<"Student ID "<<studentID<<endl;
    cout<<"Class "<<Class<<endl;
  }
};
int main(){
  person* ptr;
  student s("mohit",54,56,34);
  ptr=&s;
  ptr->showinput();
  s.display();
  return 0;
}