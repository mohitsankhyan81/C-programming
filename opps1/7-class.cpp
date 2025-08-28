//this is a special pointer in c++ that point to the corrent object

//this -> prop is some as *(this).prop

#include <iostream>
#include <string>
using namespace std;

class teacher{
  private:
    double salary;
  
  public:
        string name;
        string dept;
        string subject;



    teacher(){
      dept="computer science";
    }

    teacher(string name,string dept,string subject,double salary){
      this->name=name;
      this->dept=dept;
      this->subject=subject;
      this->salary=salary;
    }
    void changeDept(string newDept){
      dept=newDept;
    }

    void getInfo(){
      cout<<"name : "<<name<<endl;
      cout<<"subject : "<<subject<<endl;
    }
};

int main(){
  teacher t1("Mohit","Computer Scirence","c++",46546);
  t1.getInfo();
}