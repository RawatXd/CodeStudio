#include<bits/stdc++.h>
bool isValidPair(vector<int> &arr, int n, int k, int m)
{
    // Write your code here.
    if(n%2 != 0){
        return false ;
    }
    unordered_map<int,int> map ;
    for(int i = 0 ; i< n ; i++){
        map[arr[i]%k]++ ;
    }
    int check1 , check2 ;
    for(int i = 0 ; i< n ; i++){
         check1 = map[arr[i]%k];
        if(arr[i]%k <= m){
            check2 = map[m - arr[i]%k];
        }
        else{
            check2 = map[k-(arr[i]%k) + m ];
        }
        if(check1 != check2){
            return false ;
        }
    }
    return true ;
}