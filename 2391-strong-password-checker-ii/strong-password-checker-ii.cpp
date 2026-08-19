class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if (password.size()<8) return false;
        int uc=0,lc=0,dg=0,sp=0;
        string special="!@#$%^&*()-+";
        for (int i=0;i<password.size();i++){
            if (i>0 && password[i]==password[i-1]) return false;
            else if(isupper(password[i])) uc+=1;
            else if(islower(password[i])) lc+=1;
            else if(isdigit(password[i])) dg+=1;
            else if(special.find(password[i])!=string::npos) sp++;
        }
        return uc>=1 && lc>=1 && dg>=1 && sp>=1;
    }
};