//realloc

//realloc() function is used to resize a previously allocated memory block. It allows you to change the size of an existing memory allocation without needing to free the old memory and allocate a new block.

//realloc(ptr, new_size);

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  int *ptr=(int *)malloc(5*sizeof(int));

  //resize the memory block to hold to hold 10 integers

  ptr=(int *)realloc(ptr,10*sizeof(int));

  //check for allocation failure
  if(ptr==NULL){
    cout<<"Memory Reallocation Failed";
    exit(0);
  }
  return 0;
}