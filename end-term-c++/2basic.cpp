//sum of numbers

#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int sum=0,nums;
    cin>>nums;
    while(nums>0){
      int rem=nums%10;
      sum=sum+rem;
      nums=nums/10;
    }

    cout<<sum<<endl;
  }
  return 0;
}