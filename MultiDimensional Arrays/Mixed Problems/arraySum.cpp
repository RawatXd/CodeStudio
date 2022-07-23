int coverageOfMatrix(vector<vector<int>> &mat) {
    // Write your code here.
     int rows = mat.size();
   int cols = mat[0].size();
   int ans = 0;
   for(int i=0;i<rows;i++){
       for(int j=0;j<cols;j++){
           if(mat[i][j]==0){
               if(i>=1 && mat[i-1][j]==1){   // Top
                   ans++;
               }
               if(i<rows-1 && mat[i+1][j]==1){  // Bottom
                   ans++;
               }
               if(j>=1 && mat[i][j-1]==1){   // Left
                   ans++;
               }
               if(j<cols-1 && mat[i][j+1]==1){  // Right
                   ans++;
               }
           }
       }
   }
   return ans;
}
