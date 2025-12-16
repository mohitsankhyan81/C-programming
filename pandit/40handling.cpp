#include <iostream>
using namespace std;


int main(){
  int n;
  cin>>n;
  try{
    if(n>=18){
      throw n;
    }
    else if (n<18){
      throw ("name");
    }
  }
  catch(int n){
    cout<<"Member is aligible"<<endl;
  }
  catch(const char* c){
    cout<<"Member is not eligible"<<endl;
  }
  return 0;
}