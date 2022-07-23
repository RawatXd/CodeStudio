#include<bits/stdc++.h>

int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here
    vector<int> v ;
    int row = matrix.size();
    int col = matrix[0].size();
    for(int i = 0 ; i< row ;i++){
        for(int j = 0 ; j< col ;j++){
            v.push_back(matrix[i][j]);
        }
    }
    sort(v.begin(),v.end());
 int n = v.size() , s =0 ;   
    return v[(s+n)/2];
}