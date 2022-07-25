int findKthElement(vector<vector<int>> matrix, int k) {
    // Write your code here.
    vector<int> ans ;
    int row = matrix.size() ;
    int col = matrix[0].size();
    int count = 0 ;
    int stRow = 0 ;
    int endRow = row - 1 ;
    int stCol = 0 ;
    int endCol = col - 1 ;
    int total = row*col ;
    while(count<total){
        for(int i = stCol ; i<= endCol && count < total ; i++){
       
            ans.push_back(matrix[stRow][i]);
            count++ ;
        }
        stRow++ ;
        
       for( int i = stRow ; i <=endRow && count<total ; i++){
            ans.push_back(matrix[i][endCol]);
           count++ ;
        }
        endCol-- ;
        for(int i = endCol ; i>=stCol && count<total ;i--){
            ans.push_back(matrix[endRow][i]);
            count++ ;
        }
        endRow-- ;
         for(int i = endRow ; i>=stRow  && count<total ;i--){
            ans.push_back(matrix[i][stCol]);
            count++ ;
        }
        stCol++ ;
    }
    
   int product = ans[k-1] ;
    return product ;
}
