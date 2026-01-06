//find the prime no of a range

#include <iostream>
using namespace std;

void primeno(int a,int b){
  for(int i=a;i<=b;i++){
    int count=0;
    for(int j=1;j<=i;j++){
      if(i%j==0){
        count++;
      }
    }
    if(count==2){
      cout<<i<<" ";
    }
  }
}
int main(){
  int a,b;
  cin>>a>>b;
  primeno(a,b);
  return 0;
}