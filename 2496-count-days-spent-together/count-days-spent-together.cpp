class Solution {
public:

    int convert(string date,vector<int>&days){
        //s.substr(idx,length);
        int month=stoi(date.substr(0,2));
        int day=stoi(date.substr(3,2));
        for (int i=0;i<month-1;i++) day+=days[i];
        return day;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int>days={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return max(min(convert(leaveAlice,days),convert(leaveBob,days))-
        max(convert(arriveAlice,days),convert(arriveBob,days))+1,0);
    }
};