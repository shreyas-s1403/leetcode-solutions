class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int>bill_amt;
        bill_amt[5]=0;
        bill_amt[10]=0;
        bill_amt[20]=0;
        for (int amt:bills){
            if (amt==5) bill_amt[5]++;
            else if (amt==10){
                if (bill_amt[5]!=0){
                    bill_amt[10]++;
                    bill_amt[5]--;
                }
                else return false;
            }
            else if (amt==20){
                if ((bill_amt[5]>=1 && bill_amt[10]>=1)){
                    bill_amt[20]++;
                    bill_amt[5]--;
                    bill_amt[10]--;
                }
                else if (bill_amt[5]>=3){
                    bill_amt[5]-=3;
                    bill_amt[20]++;
                }
                else return false;
            }
        }
        return true;
    }
};