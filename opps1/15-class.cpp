#include <iostream>
#include <string>
using namespace std;

class teacher{
  public:
    string name;
    string dept;
    string subject;
    double salary;

    teacher(string name,string dept,string subject,double salary){
      this->name=name;
      this->dept=dept;
      this->subject=subject;
      this->salary=salary;
    }


    teacher(teacher &org){
      this->name=org.name;
      this->dept=org.dept;
      this->subject=org.subject;
      this->salary=org.salary;
    }

    void getinfo(){
      cout<<"Name : "<< name<<endl;
      cout<<"subject :"<<subject<<endl;
    }

};


int main(){

  teacher t1("Mohit","Bca","c++",45322);
  t1.getinfo();
  return 0;
}