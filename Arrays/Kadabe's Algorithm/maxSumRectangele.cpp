#include <bits/stdc++.h> 
int kadane(vector<int> &ans, int m){
    int maxSum = INT_MIN;
    int curSum = 0 ;
    for(int i = 0 ; i< m ; i++){
        curSum += ans[i] ;
        if(curSum>maxSum){
            maxSum = curSum ;
        }
        else if(curSum < 0){
            curSum = 0 ;
        }
    }
    return maxSum ;
}
int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
	// write your code here
    int res = INT_MIN ;
    for(int i = 0 ; i < n ; i++){
        vector<int> ans(m) ;
        for(int j = i ; j<n ; j++){
            for(int col = 0 ; col< m ; col++){
                ans[col] += arr[j][col];
            }
            int temp = kadane(ans,m);
        res = max(res,temp);
        }
    }
    return res ;
}
