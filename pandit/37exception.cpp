#include <iostream>
using namespace std;

void Number(int value){
  try{
    if(value==0){
      throw 'x';
    }
    else if(value>0){
      throw value;
    }
    else if (value<0){
      throw 3.4;
    }
  }
  catch(...){
    cout<<"Caught an exception"<<endl;
  }
}
int main(){
  Number(7);
  Number(0);
  Number(-2);
  return 0;
}