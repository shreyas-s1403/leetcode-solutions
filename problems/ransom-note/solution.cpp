class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>rmap;
        map<char,int>mmap;
        for (char c:ransomNote){
            rmap[c]++;
        }
        for (char c:magazine){
            mmap[c]++;
        }
        for (char c:ransomNote){
            if (mmap[c]<rmap[c]) return false;
        }
        return true;
        
    }
};