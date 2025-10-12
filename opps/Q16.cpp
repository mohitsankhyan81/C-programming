#include <iostream>
using namespace std;

class student{
  private:
    int roll;
    int marks;
  public:
    void setdata(int a,int b){
      roll=a;
      marks=b;
    }
    friend void showdata(student s);
};

void showdata(student s){
  cout<<"roll : "<< s.roll<<"marks : "<< s.marks<<endl;
}
int main(){
  student s1;
  s1.setdata(436,567);
  showdata(s1);
}