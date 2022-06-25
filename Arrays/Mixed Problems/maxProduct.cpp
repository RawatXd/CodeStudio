#include <unordered_map>
vector<long long> maxProductCount(vector<int> &arr, int n) {
    // Write your code here.
    unordered_map<long long , long long> map ;
    vector<long long> ans ;
    for(int i = 0 ; i< n ; i++){
        for(int j = i+1 ; j<n ; j++){
            long long a1 = arr[i] ;
            long long a2 = arr[j] ;
            map[a1*a2]++ ;
        }
    }
    long long freq = 0 ;
    long long maxProduct = 0 ;
      for (pair<long long, long long> element : map)
    {      
       if(element.second>=freq)
       {
        if(element.second==freq) 
        { 
            maxProduct=min(maxProduct,element.first); 
        } 
       else {
           maxProduct=element.first;
       }
           freq=element.second;
    } 
    }   
    if(freq>1){
        freq = (freq*(freq-1))/2 ;
        ans.push_back(maxProduct);
        ans.push_back(freq);
    }
    else{
        ans.push_back(0);
        ans.push_back(0);
    }
    return ans ;
}