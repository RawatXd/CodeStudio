vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    // Write your code here
    long long m = 1000000007;
    long long left ,right;
    vector<int> ans;
    vector<int> sum(n+1);
    sum[0] = 0;
    for(long long i=0;i<n;i++){
        sum[i+1] = (sum[i]%m+arr[i]%m)%m;
    }
    long long temp=0;
    for(long long i=0;i<q;i++){
        left = queries[i][0];
        right = queries[i][1];
        left--;
       temp= (sum[right%n]-sum[left%n]+((sum[n]*((right/n - left/n)%m))))%m;
        ans.push_back((temp+m)%m);
    }
    return ans;
}