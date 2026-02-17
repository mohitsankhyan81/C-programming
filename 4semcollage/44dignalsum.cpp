#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];;
        }
    }

    int sum=0;
    int maindignal=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                maindignal+=arr[i][j];
            }
            if((i+j)%2==0){
                sum+=arr[i][j];
            }
        }
    }
    cout<<maindignal<<endl;
    cout<<sum<<endl;

    int sidesum=sum-maindignal;
    cout<<sidesum<<endl;
    return 0;
}