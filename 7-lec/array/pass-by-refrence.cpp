//pass by refrence code

#include <iostream>
using namespace std;
void pass_ref(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]*=2;
    }

}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<"arr is"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    pass_ref(arr,5);

    cout<<endl<<"changed values"<<endl;

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}