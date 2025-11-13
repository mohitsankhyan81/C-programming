#include <iostream>
#include <vector>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    int r;
    cin>>r;
    r=r%n;
    for(int i=0;i<n;i++){
      cout<<arr[(i+r)%n];
      if(i!=n-1){
        cout<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}