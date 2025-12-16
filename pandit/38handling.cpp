#include <iostream>
using namespace std;

void Divison(int x,int y){
  cout<<"inside function\n";
  try{
    if(y==0){
      throw y;
    }
    else{
      cout<<"Divison ="<<x/y<<endl;
    }
  }
  catch(int y){
    cout<<"divide by zero inside function";
    throw;
  }
}
int main(){
  try{
    Divison(34,56);
  }  
  catch(int e){
    cout<<"caught divide by zero inshide main";
  }
  return 0;
}