
	// Write your code here
    int maxOne(vector<vector<int>> &arr)
{
    // Write your code here
    int n=arr.size();
    int m=arr[0].size();
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j][i]==1)
            {
               return j;
                break;
            }
        }
    }
}