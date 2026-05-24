class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        int mini=100000;
        for (int i=0;i<list1.size();i++){
            if (find(list2.begin(),list2.end(),list1[i])!=list2.end()){
                int index=find(list2.begin(),list2.end(),list1[i])-list2.begin();
                if ((index+i)<mini){
                    mini=index+i;
                }
            }
        }
        for (int i=0;i<list1.size();i++){
            if (find(list2.begin(),list2.end(),list1[i])!=list2.end()){
                int index=find(list2.begin(),list2.end(),list1[i])-list2.begin();
                if ((index+i)==mini){
                    ans.push_back(list1[i]);
                }
            }
        }
        return ans;

    }
};