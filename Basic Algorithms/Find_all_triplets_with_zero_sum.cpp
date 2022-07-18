vector<vector<int>> findTriplets(vector<int>arr, int n) {
sort(arr.begin(),arr.end());
      vector<vector<int>> answer;
       for(int i=0;i<=n-2;i++){
          if(i==0 || arr[i]!=arr[i-1]){
               int lo=i+1;
               int hi=n-1;
               int sum=0-arr[i];
               while(lo<hi){
                   if(arr[lo]+arr[hi]==sum){
                      vector<int> ans;
                       ans.push_back(arr[i]);
                       ans.push_back(arr[lo]);
                       ans.push_back(arr[hi]);
                       answer.push_back(ans);
                      while(lo <hi && arr[lo]==arr[lo+1]){
                           lo++;
                       }while(hi>lo && arr[hi]==arr[hi-1]){
                          hi--;
                       }
                       lo++;
                       hi--;
                   }
                  else if(arr[lo]+arr[hi]>sum){
                       hi--;
                   }
                   else{

                       lo++;

                   }

               }

           }

       }

       return answer;

}