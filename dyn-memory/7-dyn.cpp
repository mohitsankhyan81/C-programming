#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  int *ptr=(int *)malloc(5*sizeof(int));

  //reallocation

  int *temp=(int *)realloc(ptr,10*sizeof(int));

  //only update the pointer if reallocation is successful

  if(temp==NULL){
    cout<<"Memory Realloction fail";
  }
  else{
    ptr=temp;
  }
  return 0;
}