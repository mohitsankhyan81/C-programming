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
      cout<<"Students data";
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
};

class Grade:protected marks{
  double total;
  float persentage;
  char grade;

  public:
    Grade(string name,int age,int m1,int m2,int m3):marks(name,age,m1,m2,m2){};

    void display(){
      total=m1+m2+m3;
      persentage=(total/300)*100;

      cout<<"Name is "<<name<<"\nAge is "<<age<<"\nMarks 1 "<<m1<<"\nMarks 2 "<<m2<<"\nMarks 3 "<<m3<<"\nTotal marks "<<total<<"\nPersentage is "<<fixed<<setprecision(2)<<persentage<<"%"<<endl;
    }
};
int main(){

  Grade g1("Mohit Sankhyan",34,65,76,56);
  g1.display();
  return 0;
}