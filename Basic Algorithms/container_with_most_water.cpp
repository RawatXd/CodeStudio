int maxArea(vector<int>& height) {
    // Write your code here.
    int s = 0 , e = height.size() -1 ;
    int ans = 0 ;
    while(s<e){
        int sh = height[s] ;
        int eh = height[e] ;
        int min_h = min(sh,eh);
        ans= max(ans,min_h*(e-s));
        if(sh<eh) s++ ;
        else e-- ;
    }
    return ans;
}