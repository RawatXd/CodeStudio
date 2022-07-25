bool isMatrixSymmetric(vector<vector<int>> matrix){
    // Write your code here. 
    int row = matrix.size();
    int col = matrix[0].size();
    for(int i = 0 ; i< row ; i++){
        for(int j= 0 ; j <col ;j++){
            if(matrix[i][j] != matrix[j][i]){
                return false ;
            }
            else continue ;
        }
    }
    return true ;
}