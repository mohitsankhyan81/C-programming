//code of maxterms of array

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    int max=INT8_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}