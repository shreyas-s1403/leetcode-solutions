int findComplement(int num) {
    
    if (num==0) return 1;
    else{
        int bin=0,i=0,n=0;
        while (num>0){
            int digit=num%2;
            if (digit==0) n+=1*pow(2,i);
            i++;
            num/=2;
        } return n;
    }
        
        
    
}