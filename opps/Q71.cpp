#include <iostream>
#include <iomanip>
using namespace std;

class Student{
  protected:
    string name;
    int rollNo;

  public:
    Student(string n,int r){
      name=n;
      rollNo=r;
    }

    ~Student(){
      cout<<name<<" of Student"<<endl;
    }
};

class Marks:public Student{
  protected:
    int m1;
    int m2;
    int m3;
  public:
    Marks(string n,int r,int m1,int m2,int m3):Student(n,r){
      this->m1=m1;
      this->m2=m2;
      this->m3=m3;
    }
};

class Grade:public Marks{
  private:
  float total;
  float persentage;
  char grade;
  public:
    Grade(string n,int r,int m1,int m2,int m3):Marks(n,r,m1,m2,m3){

    }
    ~Grade(){
      cout<<"Grade of student is "<<grade<<endl;
    }

    void display(){
      total=m1+m2+m3;
      persentage=total/3;

      if(persentage>=75){
        grade='A';
      }
      else if(persentage>=74&&persentage<=64){
        grade='B';
      }
      else if(persentage>=63&& persentage<=54){
        grade='C';
      }
      if(persentage<50){
        grade='D';
      }


      cout<<"Name is "<<name<<endl;
      cout<<"Roll no is "<<rollNo<<endl;
      cout<<"Total is "<<total<<endl;
      cout<<"Persentage "<<fixed<<setprecision(2)<<persentage<<endl;
      cout<<"Grade is "<<grade<<endl;

    }
};
int main(){
  Grade g1("Mohit",101,80,70,90);
  g1.display();
  Grade g2("Ankit",202,37,78,56);
  g2.display();
  return 0;
}