#include <iostream>
using namespace std;
template <class T1,class T2>
void display(T1 a ,T2 b){
  cout<<"Value of a: "<<a<<endl;
  cout<<"Value of b: "<<b<<endl;
}

int main(){
  display(100,45.64);
  display('X',"Template Example");
}