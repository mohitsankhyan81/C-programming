#include <iostream>
using namespace std;
int main(){
    int arr[3][3]={
        {1,0,0},
        {4,5,0},
        {7,8,9}
    };
    bool isupper=true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i<j&& arr[i][j]!=0){
                isupper=false;
                break;
            }
        }
        if(!isupper){
            break;
        }
    }

    if(isupper){
        cout<<"This is the upper trangular matrix";
    }
    else{
        cout<<"This is not uper triangular matrix";
    }
    return 0;
}