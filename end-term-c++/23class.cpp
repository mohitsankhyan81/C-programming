//permitrized constructor


#include <iostream>
using namespace std;

class student{
  private:
    string name;
    int age;
  public:
    student(string name,int age){
      this->name=name;
      this->age=age;
    }

    void diplsy(){
      cout<<"Name is "<<name<<"\nAge is "<<age<<endl;
    }
};
int main(){
  student s1("Mohit sankhyan",45);
  s1.diplsy();

  return 0;
}