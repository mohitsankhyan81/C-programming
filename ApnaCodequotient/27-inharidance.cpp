//Hybrid inheritance

#include <iostream>
using namespace std;

class student{
  protected:
    int Rollno;
  public:
    void get_no(int rn){
      Rollno=rn;
    }
    void show_no(){
      cout<<"Roll no. = "<<Rollno<<endl;
    }
};

class test:public student{
  protected:
    float marks1,marks2;
    public:
    void get_marks(float a,float b){
      marks1=a;
      marks2=b;
    }
    void show_marks(){
      cout<<"\n marks in subject 1 : "<<marks1;
      cout<<"\n marks in subject 2 : "<<marks2;
    }
};

class sports{
  protected:
  float s_score;
  public:
  void get_sscore(float s){
    s_score=s;
  }
  void show_sscore(){
    cout<<"\n sport wt: "<<s_score;
  }
};

class Cultural{
  protected:
  float c_score;
  public:
  void get_cscore(float c){
    c_score=c;
  }
  void show_cscore(){
    cout<<"\n cultural wt: "<<c_score;
  }
};

class result:public test,public sports,public Cultural{
  float total;
  public:
  void display_result(){
    total=marks1+marks2+s_score+c_score;
    show_no();
    show_marks();
    show_sscore();
    show_cscore();
    cout<<"\nTotal Marks: "<<total<<endl;
  }
};
int main(){
  result st1;
  st1.get_no(454);
  st1.get_marks(45,34);
  st1.get_sscore(7);
  st1.get_cscore(6);
  st1.display_result();
  return 0;
}