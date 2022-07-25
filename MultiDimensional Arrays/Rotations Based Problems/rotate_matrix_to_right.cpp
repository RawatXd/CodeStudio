vector<int> rotateMatRight(vector<vector<int>> mat, int n, int m, int k) {
    // Write your code here.
    int a = k%m;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<m;j++)
        {
            int c = ((m-a)+j)%m;
            v.push_back(mat[i][c]);
        }
    }
    return v;
}