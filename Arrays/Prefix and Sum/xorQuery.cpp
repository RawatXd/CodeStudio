vector<int> xorQuery(vector<vector<int>> &queries)
{
	// Write your code here
    vector<int> ans ;
    int xOr = 0 ;
    for(int i = 0 ; i< queries.size() ; i++){
        if(queries[i][0]==1){
            ans.push_back(queries[i][1]^xOr);
        }
        else
            xOr = xOr^queries[i][1];
            }
    for(int i = 0 ; i< ans.size() ; i++){
        ans[i] = ans[i] ^ xOr ;
    }
    return ans ;
    
}