// #include <iostream>
// #include <climits>
// using namespace std;

// int getMaxSum(int matrix[4][3],int row,int col){
// int maxSum=INT_MIN;
//   for(int i=0;i<row;i++){
//     int rowSum=0;
//     for(int j=0;j<col;j++){
//       rowSum+=matrix[i][j];
//     }
//     maxSum=max(maxSum,rowSum);
//   }
//   return maxSum;
// }

// int main(){
//   int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//   int row=4;
//   int cols=3;
//   int key=8;
//   cout<<getMaxSum(matrix,row,cols)<<endl;
// }