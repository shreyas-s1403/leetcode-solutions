class MyHashSet {
    vector<int> s;
public:
    MyHashSet() {
        
    }

    void add(int key) {
       s.push_back(key);
    }
    
    void remove(int key) {
        erase(s,key);
    }
    
    bool contains(int key) {
        for (int n: s){
            if (n==key){ return true; break;}
        }
        return false;
    }
};      

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */