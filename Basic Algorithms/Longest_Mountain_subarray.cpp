int longestMountain(int *arr, int n)
{
    // Write your code here.
    int ans = 0 ;
    if(n<3){
        return ans ;
    }
    for(int i = 1 ; i < n-1 ; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            int left = i - 1 ;
            int right = i + 1 ;
            while(left>0 && arr[left]>arr[left-1]){
                left-- ;
            }
            while(right< n-1 && arr[right]>arr[right+1]){
                right++ ;
            }
            ans = max(right-left+1,ans);
        }
    }
    return ans ;
}