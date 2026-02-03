void reverseString(char* s, int sSize) {
    int st=0,e=sSize-1;
    while(st<e){
        char temp=s[st];
        s[st]=s[e];
        s[e]=temp;
        st++;e--;
    }
   
}