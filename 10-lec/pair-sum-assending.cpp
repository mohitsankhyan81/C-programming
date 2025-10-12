// pair sum 
// when arr is in assending order

#include <iostream>
#include <vector>
using namespace std;
int main(){
 vector<int>num={5,7,11,25,50};
vector<int>ans;
int target=36;
int n=num.size();
int i=0,j=n-1;
while(i<j){
    int pairsum=num[i]+num[j];
    if(pairsum>target){
        j--;
    }
    else if(pairsum<target){
        i++;
    }
    else{
        ans.push_back(i);
        ans.push_back(j);
        break;
    }
}
cout<<"ans is\n";
for(int val:ans){
    cout<<val<<" ";
}
}