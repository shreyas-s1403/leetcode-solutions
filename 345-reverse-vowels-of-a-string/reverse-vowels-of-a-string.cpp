class Solution {
public:
    string reverseVowels(string s) {
        int left=0;
        int right=s.size()-1;
        while (left<right){
            char ch=tolower(s[left]),ch1=tolower(s[right]);
            if (ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u'){
                left++;
            }
            else if (ch1!='a' && ch1!='e' && ch1!='i' && ch1!='o' && ch1!='u'){
                right--;
            }
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};