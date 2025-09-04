//Shallow copy
//c++ program for the above approch
#include <iostream>
#include <string>
using namespace std;

class box{
  private:

  int length;
  int breadth;
  int height;
  int *p;

  public:
    //function that set the dimesions;
    void set_dimensiond(int length1,int breadth1,int height1,int x){
      length=length1;
      breadth=breadth1;
      height=height1;
      p=new int;
      *p=x;
    }

    //function display the dimenstions
    void showdata(){
      cout<<"length = "<<length
      <<" "<<"breadth = "<<breadth
      <<" "<<"height = "<<height
      <<" "<<"P int pointer to ="<<p<<
      endl;
    }
};
int main(){
  box b1,b3;
  b1.set_dimensiond(14,34,32,45);
  b1.showdata();

  //when copying the data of object 
  //at the time of initialization
  //then copy is made throug
  //copy construcot
  box b2=b1;
  b2.showdata();

  //when coping the data of object 
  //after initialization then the 
  //copy is done through default
  //assignement operator
  b3=b1;
  b3.showdata();
}