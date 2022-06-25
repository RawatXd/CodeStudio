pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
// Write your code here.
   pair<int, int> p;
   p.first=-1;
   p.second=-1;
   int f=0;
   for(int i=0;i<n;i++){
       if(arr[i]==x && f==0){
           f=1;
           p.first=i;
       }
       if(arr[i]==x && arr[i+1]!=x){
           p.second=i;
       }
   }
   return p;
}
