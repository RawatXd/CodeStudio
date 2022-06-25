int bestInsertPos(vector<int> arr, int n, int m)
{
 
    int st = 0 , e = n-1 ;
    while(st <= e){
        int mid = st + (e - st)/2 ;
        if(arr[mid] == m){
            return mid ;
        }
        else if(arr[mid] < m){
            st = mid + 1 ;
        }
        else{
            e = mid- 1 ;
        }
    }
    return st ;
}