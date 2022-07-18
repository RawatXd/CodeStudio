vector<int> findTriplets(vector<int> &arr, int n) 
{
    //Write your code here.
    vector<int> ans ;
    sort(arr.begin(), arr.end());
    for(int i = n-1 ;i>=0 ;i--){
        int j = 0 ;
        int k = i-1 ;
         while (j < k) {
        if(arr[i]==arr[j]+arr[k]){ 
            
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            ans.push_back(arr[k]);
            return ans ;
        }
        else if(arr[i]>arr[j]+arr[k]){
            j  = j+1 ;
        }
        else{
            k = k-1 ;
        }
    }
    }
    return ans ;
}