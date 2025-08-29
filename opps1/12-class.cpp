#include<iostream>
using namespace std;
class A{
  int num;
  public:
    void setNum(int n){
      num=n;
      }
    friend int sum(A,class B);
};
class B{
    int num;
  public:
  void setNum(int n){
     num=n;
  }
  friend int sum(A,B);
};
int sum(A a,B b){
  return a.num+b.num;
}
int main(){
  A obj1;
  B obj2;
  obj1.setNum(10);
  obj2.setNum(20);
  cout<<"Sum="<<sum(obj1,obj2)<<endl;
}
