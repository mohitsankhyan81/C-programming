#include <iostream>
using namespace std;

class student{
  private:
    string name;
    int age;

  public:
    student(string n,int a){
      name=n;
      age=a;
    }

    ~student(){
      cout<<"destructor is executed "<<endl;
    }

    void showdata(){
      cout<<"name is "<<name<<endl;
      cout<<"age is "<<age<<endl;
    }
};

int main(){
  student *s1;
  s1=new student("mohit",56);
  s1->showdata();

  delete s1;
  return 0;
}