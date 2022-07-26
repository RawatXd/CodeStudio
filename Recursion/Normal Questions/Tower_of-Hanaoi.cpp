#include<bits/stdc++.h>
void deep(int n, int a, int b, int c, vector<vector<int>>& res){
      if(n == 0) return;
   deep(n-1, a, c, b, res);   // move the n-1 disk to c by taking the help of b
   res.push_back({a,c});      // store in res

   deep(n-1, b, a, c, res);   // again move n-1 disk to b by taking the help of c

}
vector<vector<int>> towerOfHanoi(int n){
   // for storing the disks  
   vector<vector<int>> res;
    // recursion using deep function.
     deep(n, 1, 2, 3, res);
   return res;
}