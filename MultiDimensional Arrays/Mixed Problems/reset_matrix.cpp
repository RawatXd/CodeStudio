#include<bits/stdc++.h>
vector<vector<int>> findGoodMatrix(vector<vector<int>> &mat)  
{
   // Write your code here
   int rows = mat.size();
   int cols = mat[0].size();
   
   vector<pair<int,int>> zeros;
   for(int i=0;i<rows;i++){  //iterate through matrix and store all 0's index
       for(int j=0;j<cols;j++){
           if(mat[i][j]==0){
               pair<int,int> p = {i,j};
               zeros.push_back(p);
           }
       }
   }
   
   int m = zeros.size();
   for(int i=0;i<m;i++){  //iterate through vector of pairs of 0's index
       for(int col=0;col<cols;col++){  //for row flipping
  if(mat[zeros[i].first][col]==1){
            mat[zeros[i].first][col]=0;  //mark them 2 so as to identify that its flipped already
           }
       }
       for(int row=0;row<rows;row++){  //for column flipping
  if(mat[row][zeros[i].second]==1){
            mat[row][zeros[i].second]=0;    
           }
       }
   }
   return mat;  //simple
}