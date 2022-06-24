string leftRotate(string str, int d) {
    // Write your code here.
    if(str.length()  == 1) return str ;
    if(d == str.length()) return str ;
    if(d>str.length()) d %= str.length() ;
    string s ;
    for(int i = 0 ; i < d ; i++){
        s += str[i] ;
    }
    str.erase(0,d);
    str += s ;
    return str ;
}

string rightRotate(string str, int d) {
    // Write your code here.
    if(str.length()  == 1) return str ;
    if(d == str.length()) return str ;
    if(d>str.length()) d %= str.length() ;
    string s ;
    for(int i = str.length() -d ; i< str.length() ; i++){
        s+= str[i] ;
    }
    str.erase(str.length() - d, str.length());
     s += str  ;
    return s ;
}