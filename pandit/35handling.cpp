#include <iostream>
using namespace std;

int main(){
  int m,n;
  m=35;
  n=0;

  try{
    if(n!=0){
      cout<<"Result (m/n) "<<m/n<<endl;
    }
    else{
      throw(n);
    }
  }
  catch(int n){
    cout<<"Exception handling "<<n<<endl;
  }
  return 0;
}