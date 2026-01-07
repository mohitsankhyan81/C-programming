//fuction overloading

#include <iostream>
using namespace std;

void display(int a){
  cout<<a<<endl;
}

void display(double a){
  cout<<a<<endl;
}

int main(){
  display(5);
  display(4.3);
  return 0;
}