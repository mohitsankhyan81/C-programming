#include <iostream>
using namespace std;

void Number(int n){
  try{
    if(n==0){
      throw 3.4;
    }
    else if(n>0){
      throw 'x';
    }
    else if(n<0){
      throw n;
    }
  }
  catch(double flo){
    cout<<"number is 0\n";
  }
  catch(char ch){
    cout<<"no is greater\n";
  }
  catch(int n){
    cout<<"no is negtive\n";
  }
  catch(...){
    cout<<"Excetpion arise"<<endl;
  }
}

int main(){
  Number(3);
  Number(0);
  Number(3.4);
  return 0;
}