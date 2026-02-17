#include <iostream>
using namespace std;
int main(){
    int r;
    int c;
    cin>>r>>c;
    int arr[r][c];
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i>=j){
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum;
    return 0;
}