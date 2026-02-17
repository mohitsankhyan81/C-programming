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
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+j==n-1){
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum;
    return 0;
}