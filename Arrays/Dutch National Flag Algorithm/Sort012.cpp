#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int low = 0 ;
    int high = n-1 ;
    int mid = 0 ;
    while(mid<=high){
        if(arr[mid]==0){
            int temp = arr[low] ;
            arr[low] = arr[mid] ;
            arr[mid] = temp ;
            low++;
            mid++ ;
        }
        else if(arr[mid] == 2){
             int temp = arr[high] ;
            arr[high] = arr[mid] ;
            arr[mid] = temp ;
            high -- ;
        }
        else{
            mid++ ;
        }
    }
}