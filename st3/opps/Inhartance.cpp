#include <iostream>
#include <iomanip>
using namespace std;

class Student{
  protected:
  string name;
  int age;

  public:
    Student(string name,int age){
      this->name=name;
      this->age=age;
    }

    ~Student(){
      cout<<"Student class"<<endl;
    }
};

class Marks:protected Student{
  protected:
    int m1;
    int m2;
    int m3;

  public:
    Marks(string name,int age,int m1,int m2,int m3):Student(name,age){
      this->m1=m1;
      this->m2=m2;
      this->m3=m3;
    }

    ~Marks(){
      cout<<"marks drived class"<<endl;
    }
};


class Grade:protected Marks{
  private:
    double total;
    float persentage;

  public:
    Grade(string name,int age,int m1,int m2,int m3):Marks(name,age,m1,m2,m3){}


    void Final(){
      total=m1+m2+m3;
      persentage=total/300*100;
    }

    void display(){
      cout<<"Student Name -> "<<name<<"\nAge -> "<<age<<"\nMarks one -> "<<m1<<"\nMarks two -> "<<m2<<"\nMarks three -> "<<m3<<"\nTotal Marks -> "<<total<<"\nPersentage -> "<<fixed<<setprecision(2)<<persentage<<"%"<<endl;
    }
};
int main(){
  Grade obj1("Mohit Sankhyan",18,10,45,57);
  obj1.Final();
  obj1.display();
  return 0;
}