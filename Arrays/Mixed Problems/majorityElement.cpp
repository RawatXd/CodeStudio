#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.   
     vector<int> ans;
        int x = arr.size()/3;
        
        unordered_map<int,int>freq;
        
        for(int i=0;i<arr.size();i++)
        {
            freq[arr[i]]++;
        }        
        for(auto i:freq)
        {
            if(i.second>x)
            {
                ans.push_back(i.first);
            }
        }        
        return ans;
}