int subArrayCount(vector<int> &arr, int k) {
    // Write your code here.
    if(arr.size()==0){
        return 0;
    }
    int count =0;
    int mp[k] = {0};
    mp[0] = 1;
    long long sum = 0;
    for(int i=0;i<arr.size();i++){
        sum = sum + arr[i];
        int rem = sum%k;
        if(rem<0){
            rem = rem+k;
        }
        count = count + mp[rem];
        mp[rem]++;
    }
    
    return count;
}