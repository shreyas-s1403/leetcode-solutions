class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>score;
        int idx=0;
        for (int i=0;i<operations.size();i++){
            if (operations[i]=="+"){
                score.push_back(score[score.size()-1]+score[score.size()-2]);
            }
            else if (operations[i]=="C"){
                score.erase(score.begin()+score.size()-1);
            }
            else if (operations[i]=="D"){
                score.push_back(score[score.size()-1]*2);
            }
            else {
                score.push_back(stoi(operations[i]));
            }
        }
        
        if (score.size()==0) return 0;
        int sum=0;
        for (auto n:score){
            cout<<n<<endl;
            sum+=n;
        }
        return sum;
    }
};