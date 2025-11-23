//sum of a and b

#include <iostream>
using namespace std;
template <class t>
void Display(t a,t b){
  cout<<a+b<<endl;
}
int main(){
  Display(1,4);
  Display(4.5,56.4);
  return 0;
}