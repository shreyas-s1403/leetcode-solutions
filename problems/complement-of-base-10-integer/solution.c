int bitwiseComplement(int n) {
    if (n==0) return 1;
    else{
        int bin=0,i=0,num=0;
        while (n>0){
            int digit=n%2;
            if (digit==0) num+=1*pow(2,i);
            i++;
            n/=2;
        } return num;
    }
        
        
    }