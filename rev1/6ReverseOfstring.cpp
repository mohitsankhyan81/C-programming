#include <iostream>
#include <vector>
using namespace std;

void revstring(vector<string>& arr){
  int n=arr.size();
  for(int i=0;i<n/2;i++){
    string temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
  }
}
int main(){
  int n;
  cin>>n;
  vector<string>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  revstring(arr);
  for(string s:arr){
    cout<<s<<" ";
  }
  return 0;
}