//inharidance

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Base class that is to be inharited
class parent{
  public:
    int id_p;
    parent(int x=22):id_p(x){}
    void printID_p(){
      cout<<"Base id = "<<id_p<<endl;
    }
};

//derived publicly inheriting from base
//class

class child:public parent{
  public:
  int id_c;
  child(int x=22):id_c(x){};
  void printID_c(){
    cout<<"Child Id = "<<id_c<<endl;
  }
};
int main(){
  child objt1;

  //An object of class child has all data members 
  //and member function of the class parent 
  //so er try accessing the parentd mthod and data from
  //the child class object;
  
  objt1.id_p=7;
  objt1.printID_p();


  //filnally accessing the child class methods and data too
  objt1.id_c=91;
  objt1.printID_c();
  return 0;
}