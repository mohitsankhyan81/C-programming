//mallo
//  function is used to allocate a single block of contiguous memory on the heap at runtime

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  int *ptr=(int * )malloc(1);
  for(int i=0;i<25;i++){
    ptr[i]=i+1;
  }
  for(int i=0;i<25;i++){
    cout<<ptr[i]<<endl;
  }
}
