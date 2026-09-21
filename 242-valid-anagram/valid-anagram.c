bool isAnagram(char* s, char* t) {
    int s1[256]={0},s2[256]={0};
    int flag=0;
    if (strlen(s)!=strlen(t)) return false;
    else{
        for(int i=0;i<strlen(s);i++){
            s1[s[i]]++; s2[t[i]]++;
        }
        for (int i=0;i<strlen(s);i++){
            if (s1[s[i]]!=s2[s[i]]){flag=1; break;}
        }
    }
    if (flag==0) return true;
    else return false;
        
}