#include <iostream>
using namespace std;
int main(){
  int a;
  int *ptr=&a;

  int **ptr1= &ptr;

  cout<<ptr1<<endl;
  cout<<&ptr<<endl;
}