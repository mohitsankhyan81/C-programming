#include <iostream>
using namespace std;
int main(){
    int r;
    int c;
    int r1;
    int c1;
    cin>>r>>c;
    cin>>r1>>c1;

    int arr1[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr1[i][j];
        }
    }

    int arr2[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr2[i][j];
        }
    }
    int result[r][c1]={0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c1;j++){
            for(int k=0;k<c;k++){
                result[i][j]+=arr1[i][k]*arr2[k][i];
            }
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}