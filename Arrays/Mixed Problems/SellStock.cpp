long getMaximumProfit(long *values, int n)
{
    //Write your code here
    long max = 0 ;
    for(int i = 1 ; i< n ; i++){
        if(values[i]>values[i-1]){
            max += values[i] - values[i-1] ;
        }
    }
    return max ;
}