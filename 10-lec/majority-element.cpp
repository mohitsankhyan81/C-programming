// find the majority element 
//brute force aproch

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>arr={1,2,2,1,1};
    vector<int>ans;
    int n=arr.size();
    for(int val:arr){
        int freq=0;
        for(int el:arr){
            if(val==el){
                freq++;
            }
        }
        if(freq>n/2){
            ans.push_back(val);
        }
    }
    cout<<"ans is ";
    for(int al:ans){
        cout<<al<<" ";
    }
}