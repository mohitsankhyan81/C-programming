// pair sum


#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>num={1,2,3,4,5};
    vector<int>ans;
    int target=9;
    int n=num.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(num[i]+num[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    
    cout<<"ans is ";
    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
}