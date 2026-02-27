#include <iostream>
using namespace std;
int main(){
    int arr[3][3]={
        {1,2,3},
        {0,4,5},
        {0,0,6}
    };
    bool islower=true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i>j&&arr[i][j]!=0){
                islower=false;
                break;
            }
        }
        if(!islower){
            break;
        }
    }

    if(islower){
        cout<<"This is the upper triangular";
    }
    else{
        cout<<"This is not upper triangular";
    }
    return 0;
}