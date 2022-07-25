
pair<int, int> search(vector<vector<int>> matrix, int x)
{
    // Write your code here.
    pair<int,int> p ;
    int row = matrix.size();
    int col = matrix[0].size() ;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j<col ;j++){
            if(matrix[i][j]==x){
               return {i,j} ;
            }
        }
    }
    return {-1,-1} ;
}