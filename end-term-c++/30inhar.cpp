// inharitance

#include <iostream>
#include <iomanip>
using namespace std;

class student{
  protected:
    string name;
    int age;
  public:
    student(string name,int age){
      this->name=name;
      this->age=age;
    }

    ~student(){
      cout<<"This is the student class deconstructor"<<endl;
    }
};

class marks:protected student{
  protected:
    int m1;
    int m2;
    int m3;
  public:
    marks(string name,int age,int m1,int m2,int m3):student(name,age){
      this->m1=m1;
      this->m2=m2;
      this->m3=m3;
    }

    ~marks(){
      cout<<"This is marks class destructor"<<endl;
    }
};

class grade:protected marks{
  private:
    int total;
    float percentage;
  public:
    grade(string name,int age,int m1,int m2,int m3):marks(name,age,m1,m2,m3){

    }

    void display(){
      total=m1+m2+m3;
      percentage=total/3;
      cout<<"Name is "<<name<<endl;
      cout<<"Age is "<<age<<endl;
      cout<<"m1 marks "<<m1<<endl;
      cout<<"m2 marks "<<m2<<endl;
      cout<<"m3 marks "<<m3<<endl;
      cout<<"Total is "<<total<<endl;
      cout<<"Percentage is "<<fixed<<setprecision(2)<<percentage<<endl;
    }
};
int main(){
  grade g1("Mohit sankhyan",34,45,89,57);
  g1.display();
  return 0;
}