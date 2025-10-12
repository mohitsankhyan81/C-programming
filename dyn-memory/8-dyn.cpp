//Example

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

  //initially allocate memory for 5 integers
  int *ptr=(int *)malloc(5*sizeof(int));

  //check if allocation was sucessfull
  if(ptr==NULL){
    cout<<"Memory alloction fail";
    exit(0);
  }

  //Now we need to store 8 elements so 
  //Reallocate 10 store 8 intergers
  ptr=(int *)realloc(ptr,8*sizeof(int));

  //check of reallocation was sucessfull
  if(ptr==NULL){
    cout<<"Memory Rellocation Failed";
    exit(0);
  }


  //Assume we only use 5 all ellement
  for(int i=0;i<5;i++){
    ptr[i]=(i+1)*10;
  }

  //shrink the array back to 5 element
  ptr=(int *)realloc(ptr,5*sizeof(int));

  //Check if shrinking was succesfull
  if(ptr==NULL){
    cout<<"Memory Rellocation Failed";
    exit(0);
  }

  for(int i=0;i<5;i++){
    cout<<ptr[i]<<" ";
  }

  //finally, Free the memory when done
  free(ptr);
  return 0;
}