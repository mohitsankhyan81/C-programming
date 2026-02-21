#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    vector<vector<int>>val={
        // {1,3},
        // {2,2}
        {{9,1,7},{8,9,2},{3,4,6}}
    };
    vector<int>arr;

    for(int i=0;i<val.size();i++){
        for(int j=0;j<val[i].size();j++){
            arr.push_back(val[i][j]);
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i];
        }
    }
    cout<<endl;

    for(int i=1;i<arr.size();i++){
        if(arr[i]-arr[i-1] > 1){
            cout<< arr[i-1] + 1;
        }
    }


    return 0;
}