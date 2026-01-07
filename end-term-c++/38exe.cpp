//divisible by zero

#include <iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter the value of a and b: ";
  cin>>a>>b;
  
  try{
    if(b==0){
      throw b;
    }

    cout<<"Result: "<<a/b<<endl;
  }

  catch(int){
    cout<<"Error: divide by zero"<<endl;
  }
  return 0;
}