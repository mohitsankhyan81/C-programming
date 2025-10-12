//multiecerse inhartance

#include <iostream>
using namespace std;
class Student{
  protected:
  int rollno;
  public:
  void get_no(int rn){
    rollno=rn;
  }
  void show_no(){
    cout<<"ROll NO. "<<rollno;
  }
};

class test:public Student{
  protected:
    float marks1,marks2;
    public:
    void get_marks(float a,float b){
      marks1=a;
      marks2=b;
    }
    void showmarks(){
      cout<<"\n marks in subject 1 : "<<marks1<<endl;
      cout<<"\n marks in subjext 2 : "<<marks2<<endl;
    }
};

class result:public test{
  float total;
  public:
  void display_result(){
    total = marks1+marks2;
    cout<<"Marks of Roll no. "<<rollno<<" is "<<total<<endl;
  }
};

int main(){
  result st1;
  st1.get_no(45);
  st1.get_marks(45.6,57.3);
  st1.display_result();
  return 0;
}