#include <iostream>
using namespace std;
void update(int *p){
  *p=*p+5;
}
int main(){
  int a=10;
  update(&a);
  cout<<a;
  return 0;
}