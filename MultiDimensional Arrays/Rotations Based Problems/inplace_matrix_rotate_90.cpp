void inplaceRotate(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<m;j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<m;j++)
        {
            swap(mat[i][j],mat[n-i-1][j]);
        }
    }
}