#include <iostream>
using namespace std;

template <class T>
int display(T a,T b){
  if(a>b){
    return a;
  }
  else{
    return b;
  }
}

int main(){
  cout<<"Max of 10,20 is "<<display(10,20)<<endl;
}