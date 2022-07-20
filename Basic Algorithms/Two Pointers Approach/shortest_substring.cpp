#include<bits/stdc++.h>
string shortestSubstring(string s)
{
    // Write your code here. //o(n^2) 
    int n=s.size();
    unordered_map<char,int>mp;
    set<char>st;
    for(int i=0;i<s.length();i++)
        st.insert(s[i]);
    
    int u=st.size();
    string ans;
    
    int shortSubtringSize=INT_MAX;
    
    for(int i=0;i<n;i++)
    {   int visited[26]={0};
        string temp="";
        int c=0;
        for(int j=i;j<n;j++)
        {
            if(visited[s[j]-'a']==0)
            {
                c++;
                visited[s[j]-'a']++;
            }
            temp+=s[j];
            if(c==u)
                break;
        }
     if(temp.length()<shortSubtringSize && c==u)
     {
         ans=temp;
         shortSubtringSize=temp.length();
     }
    }
    return ans;
}