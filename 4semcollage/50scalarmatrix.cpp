#include <iostream>
using namespace std;

int main(){
    int arr[3][3]={
        {5,0,0},
        {0,5,0},
        {0,0,5}
    };

    bool isscalar=true;
    int value = arr[0][0];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                if(arr[i][j] != value){
                    isscalar=false;
                }
            }
            else{
                if(arr[i][j] != 0){
                    isscalar=false;
                }
            }
        }
    }

    if(isscalar)
        cout<<"This is scalar matrix";
    else
        cout<<"This is not scalar matrix";

    return 0;
}
