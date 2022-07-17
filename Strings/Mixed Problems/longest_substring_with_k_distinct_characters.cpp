#include<bits/stdc++.h>
int getLengthofLongestSubstring(string s, int k) {
    // Write your code here.
    int ans  = -1 ; 
  int j = 0 ;
unordered_map <char , int> result;
for ( int i = 0 ; i< s.size(); i++)
{
 result[s[i]]++;
 if (result.size() <= k)
 {
  ans = max ( ans , (i-j)+1);   
 }
 else if ( result.size() > k)
 {
  while ( result.size() >k  && i >j )
  {
   if ( result[s[j]] == 1 )
   result.erase(s[j]);
   else  
    result[s[j]]--;   
   j++;
  }
 }
 ans = max ( ans , (i-j)+1);
}
return ans;
}