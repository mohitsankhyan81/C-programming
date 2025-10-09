#include <iostream>
using namespace std;

int main(){
  int a,b;
  cout<<"Enter two number: "<<endl;
  cin>>a>>b;
  try{
    if(b==0){
      throw "Division by zero not allowed!";
      cout<<"Result: "<<a/b<< endl;
    }
  }
  catch(const char* msg){
    cout<<"Error: "<<msg<<endl;
  }
  cout<<"Program continues..."<<endl;
  return 0;
}