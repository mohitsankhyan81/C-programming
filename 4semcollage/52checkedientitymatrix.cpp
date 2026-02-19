#include <iostream>
using namespace std;
int main(){
    int arr[3][3]={
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };

    int identity=true;
    int value=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                if(arr[i][j]!=value){
                    identity=false;
                    break;
                }
            }
            if(!identity){
                break;
            }
        }
    }

    if(identity){
        cout<<"This is identity matrix"<<endl;
    }
    else{
        cout<<"This is not identity matrix";
    }
    return 0;
}