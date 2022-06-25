#include<bits/stdc++.h>
int count(int *b,int m, int x){
    int s=0,e=m-1;
   int idx=-1;
   while(s<=e){
       int mid=s+(e-s)/2;
       if(b[mid]<=x){
          idx=mid;
           s=mid+1;
       }
       else if(b[mid]>x)e=mid-1;
   }
  return idx+1;
}
vector < int > countSmallerOrEqual(int * a, int * b, int n, int m) {
  vector<int> ans;
  sort(b,b+m);
  for(int i=0;i<n;i++){
      int cnt=count(b,m,a[i]);
      ans.push_back(cnt);
  }
   return ans;
}