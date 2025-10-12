//constructor

#include <iostream>
#include <string>
using namespace std;

class Student{
  private:
    int fee;
  public:
    string name;
    int age;

    Student(string n,int a,int f){
      name=n;
      age=a;
      fee=f;
    }

    int getdata(){
      return fee;
    }

};
int main(){
  Student s1("mohit sankhyan",32,547);
  cout<<s1.name<<endl;
  cout<<s1.age<<endl;
  cout<<s1.getdata()<<endl;
}