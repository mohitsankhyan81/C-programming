#include <iostream>
using namespace std;

int main(){
  try{
    try{
      throw 10;
    }
    catch(int x){
      cout<<"Inter catch: Cout int "<<x<<endl;
    }
    throw string("Error from outer block");
  }
  catch(string s){
    cout<<"Outer catch: Caught string "<<s<<endl;
  }
  

  return 0;
}
