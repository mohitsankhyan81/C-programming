#include <iostream>
#include <iomanip>
using namespace std;

class student{
  protected:
    string name;
    int rollNo;
  public:
    student(string n,int r){
      name=n;
      rollNo=r;
    }
};

class marks:public student{
  protected:
    int m1;
    int m2;
    int m3;
  public:
    marks(string n,int r,int m1,int m2,int m3):student(n,r){
      this->m1=m1;
      this->m2=m2;
      this->m3=m3;
    }
};

class Grade:public marks{
  private:
    float total;
    float persentage;
    double grade;

  public:
    void exes(){
      cout<<fixed<<setpercision(4)<<
     }
};