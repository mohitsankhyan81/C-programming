#include <iostream>
using namespace std;
template <typename t>
void sum(t a,t b){
  cout<<a+b<<endl;
}
int main(){
  sum(1,3);
  sum(1.2,3.4);
  sum('a','b');
}