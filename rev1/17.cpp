#include <iostream>
using namespace std;

class AgeException{
  public:
    string message;
    AgeException(string msg){
      message=msg;
    }
};
int main(){
  try{
    int age=24;
    if(age<18){
      throw AgeException("age is lesss than 18 not eligible");
      cout<<"You are eligible"<<endl;
    }
  }
  catch(AgeException e){
    cout<<e.message<<endl;
  }
  return 0;
}