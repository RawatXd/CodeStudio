#include<bits/stdc++.h>
string encode(string &message)
{
    //   Write your code here.
    int count = 1;
    string str;
    for( int i=0; i<message.length(); i++ )
    {
        if( message[i] == message[i+1] )
        {
            count++;
        }
        else
        {
            str += message[i]+to_string(count);
            count = 1;
        }
    }    
    return str;
}