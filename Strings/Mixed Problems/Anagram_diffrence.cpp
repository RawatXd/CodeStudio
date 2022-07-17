#include<unordered_map>
int getMinimumAnagramDifference(string &str1, string &str2) {
    // Write your code here.
    unordered_map<char,int> map ;
    for(int i = 0 ; i < str1.length() ; i++  ){
    map[str1[i]]++ ;
  map[str2[i]] -- ;       
    }
    int ans  = 0 ;
    for(auto i : map){
        if(i.second>0){
            ans += i.second ; 
        }
    }
    return ans ;
}