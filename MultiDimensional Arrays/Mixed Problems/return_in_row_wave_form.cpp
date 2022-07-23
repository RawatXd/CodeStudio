vector<int> rowWaveForm(vector<vector<int>> &mat) {
    // Write your code here.
int row=mat.size();
    int col=mat[0].size();
    vector<int> ans(row*col);
    int c=0;
    for(int i=0;i<row;i++){
        if(i&1){
            //odd
            for(int j=col-1;j>=0;j--){
                ans[c]=(mat[i][j]);
                c++;
            }
            
        }else{
            //even
            
            for(int j=0;j<col;j++){
                ans[c]=(mat[i][j]);
                c++;
            }
        }
    }
    return ans;
}

