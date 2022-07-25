vector<int> findSubmatrixSum(vector<vector<int>> &arr, vector<vector<int>> &queries) 
{
    // Write your code here
     vector<int> ans;
    int n=arr.size();
    int m=arr[0].size();
    
    vector<vector<int>> dp(n,vector<int>(m));
    
    for(int i=0;i<n;i++){ //store the dp[i][j] with the sum of ith row uptil jth col
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
            dp[i][j]=sum;  
        }  
    }
    
    for(auto x:queries){
        int sy=x[0];
        int sx=x[1];
        int ey=x[2];
        int ex=x[3];
        int sum=0;
        //saves time.
        for(int i=sy;i<=ey;i++){
           if(sx==0){ // if sx==0 toh ex col tak ka sum add karo
               sum+=dp[i][ex];
           }else if(sx>0){ // else if the submatrix is in between then the resultant sum will be  (ex tak ka sum) - (sx-1 tak ka sum){cuz we want sx};
               sum+=dp[i][ex] - dp[i][sx-1]; //resultant row sum.
           }
        }
        ans.push_back(sum); //push_back sum.
    }
    
    return ans;

}
