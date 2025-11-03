#include <iostream>
using namespace std;
template <class T>
T add(T a,T b){
  return a+b;
}
int main(){
  cout<<"Sum (int): "<<add(10,20)<<endl;
  cout<<"sum (double): "<<add(10.5,10.3)<<endl;
  return 0;
}