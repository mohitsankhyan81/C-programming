#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int max_sum=INT8_MIN;
    for(int st=0;st<n;st++){
        int current_sum=0;
        for(int end=st;end<n;end++){
            current_sum+=arr[end];
            max_sum=max(current_sum,max_sum);
        }
    }
    cout<<"maximam sum is "<<max_sum;
}