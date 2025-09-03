//callo
// The calloc() (stands for contiguous allocation) function is similar to malloc(), but it initializes the allocated memory to zero. It is used when you need memory with default zero values
// calloc(n, size);

#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
  int *ptr=(int *)calloc(5,sizeof(int));

  //checking if fail of pass
  if(ptr==NULL){
    cout<<"Allocation failed";
    exit(0);
  }
  //No need to populate os already
  //initialized to 0

  //print the array

  for(int i=0;i<5;i++){
    cout<<ptr[i]<<" ";
  }
} 