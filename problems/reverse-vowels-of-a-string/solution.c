char* reverseVowels(char* s) {
    int start=0,end=strlen(s)-1;
    while(start<end){
        char ch=toupper(s[start]),ch1=toupper(s[end]);
        if (ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U'){
            start++;
        }
        else if (ch1!='A'&&ch1!='E'&&ch1!='I'&&ch1!='O'&&ch1!='U'){
            end--;
        }
        else{
            char temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
    }
    return s;
}