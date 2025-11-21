#include <iostream>
using namespace std;

void transpose(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int temp[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp[j][i]=arr[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    transpose(arr);
    return 0;
}