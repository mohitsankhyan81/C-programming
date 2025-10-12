//free

//The memory allocated using functions malloc() and calloc() is not de-allocated on their own. The free() function is used to release dynamically allocated memory back to the operating system. It is essential to free memory that is no longer needed to avoid memory leaks.


// free(ptr);

#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
  int *ptr=(int *)calloc(5,sizeof(int));
  //Do some operation...
  for(int i=0;i<5;i++){
    cout<<ptr[i]<<" ";
  }

  //free the memory after completing
  //operations
  free(ptr);
  return 0;
}
