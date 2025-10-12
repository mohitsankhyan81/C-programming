// The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming in C++. In this article, we will learn about inheritance in C++, its modes and types along with the information about how it affects different properties of the class.


// class DerivedClass : mode_of_inheritance BaseClass {
//     // Body of the Derived Class
// };

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Base{
  public:
    int n;
    void printN(){
      cout<<n<<endl;
    }
};

//Inharid Base class publicly
class Derived:public Base{
  public:
  void func(){
    //Accessing Base class member
    n=22;
  }
};
int main(){
  //creating object of derived
  Derived d;

  //Accesing Drived classs memeber
  d.func();

  //Access Base class function
  d.printN();
  return 0;
}