bool isSubSequence(string str1, string str2) {
    // Write your code here.
    int n1 = str1.length();
    int n2 = str2.length();
    int l = 0 , h = 0 ;
    int count  =  10 ;
    while(h<n2){
        if(str1[l]==str2[h]){
            if(l == n1-1){
                count = 0 ;
                return true ;
                break ;
            }
            else{
                l++ ;
                h++ ;
            }
        }
        else{
           h++ ;
        }            
    }
    if(count == 10){
        return false ;
    }
}
