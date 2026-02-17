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
    bool islower=true;
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            if(i<j&& arr[i][j]!=0){
                islower= false;
                break;
            }
        }
        if(!islower){
            break;
        }
    }
    if(islower){
        cout<<"This is lower trinagular";
    }
    else{
        cout<<"This is not lower triangulater matrix";
    }
    return 0;
}