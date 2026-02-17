#include <iostream>
using namespace std;
int main(){
    int r;
    int c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    bool isupper=true;
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            if(i>j&&arr[i][j]!=0){
                isupper=false;
                break;
            }
        }
        if(!isupper){
            break;
        }
    }


    if(isupper){
        cout<<"this is the upper triangular matrix";
    }
    else{
        cout<<"this is the no upper case";
    }
    return 0;
}