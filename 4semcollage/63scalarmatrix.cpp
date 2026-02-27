#include <iostream>
using namespace std;
int main(){
    int arr[3][3]={
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };
    int value=arr[0][0];
    int isscalar=true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j && arr[i][j]!=0){
                if(arr[i][j]!=value){
                    isscalar=false;
                }
            }
        }
        if(!isscalar){
            isscalar=false;
        }
    }

    if(isscalar){
        cout<<"This is the scaller matrix";
    }
    else{
        cout<<"This is the non scaller matrix";
    }
    return 0;
}