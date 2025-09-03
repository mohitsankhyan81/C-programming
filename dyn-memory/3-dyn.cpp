#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  int *ptr=(int*)malloc(sizeof(int)*5);
  if(ptr==NULL){
    cout<<"Alloction Failed";
    exit(0);
  }
  for(int i=0;i<5;i++){
    ptr[i]=i+1;
  }
  for(int i=0;i<5;i++){
    cout<<ptr[i]<<endl;
  }
}
