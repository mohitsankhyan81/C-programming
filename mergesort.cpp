#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int st,int mid,int end){
  int i=st;
  int j=mid+1;
  vector<int>result;

  while(i<=mid&&j<=end){
    if(arr[i]<arr[j]){
      result.push_back(arr[i]);
      i++;
    }
    else{
      result.push_back(arr[j]);
      j++;
    }
  }

  while(i<=mid){
    result.push_back(arr[i]);
    i++;
  }
  while(j<=end){
    result.push_back(arr[j]);
    j++;
  }

  for(int i=0;i<result.size();i++){
    arr[st+i]=result[i];
  }
}

void mergesort(int arr[],int st,int end){
if(st<end){
  int mid=st+(end-st)/2;
  
  mergesort(arr,st,mid);
  mergesort(arr,mid+1,end);

  merge(arr,st,mid,end);
}
}
int main(){
  int arr[]={34,45,23,24,11};
  int n=sizeof(arr)/sizeof(int);

  mergesort(arr,0,n-1);
  cout<<"Sorted array is"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}