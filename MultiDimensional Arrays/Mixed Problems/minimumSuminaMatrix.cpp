int minSum(vector<vector<int>> &arr)
{
	// Write your code here
    
    int n = arr.size();


    // Create an array temp to store all the combinations

    vector<int> temp(6);


    // Traverse through all the N-1 rows

    for (int i = 0; i < n - 1; i++)

    {

        // Find all the possible 6 combinations

        temp[0] = arr[i][1] + arr[i + 1][0];

        temp[1] = arr[i][2] + arr[i + 1][0];

        temp[2] = arr[i][0] + arr[i + 1][1];

        temp[3] = arr[i][2] + arr[i + 1][1];

        temp[4] = arr[i][0] + arr[i + 1][2];

        temp[5] = arr[i][1] + arr[i + 1][2];


        // Update the (i+1)th row with the combinations calculated above

        arr[i + 1][0] = min(temp[0], temp[1]);

        arr[i + 1][1] = min(temp[2], temp[3]);

        arr[i + 1][2] = min(temp[4], temp[5]);

    }


    // Find the answer as the minimum all the 3 values

    int ans = min(arr[n - 1][0], min(arr[n - 1][1], arr[n - 1][2]));


    return ans;
}