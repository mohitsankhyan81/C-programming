#include <iostream>
using namespace std;

int main(){
    int arr[]={5,6,7,12,2,1};
    int n=sizeof(arr)/sizeof(int);
    int sum=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum+=arr[i];
        }
    }
    cout<<sum;
    return 0;
}