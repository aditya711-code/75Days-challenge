class RandomizedSet {
public:
  //intiution as we need to do things in O(1) time and this can be achieved by hashmap insertion deletion searching
  //but to get random element from hashmap it will cost us O(n) tc so we need another data structure that is vector so we can use rand()%v.size() and get random ele
    unordered_map<int,int>map;
    vector<int>a;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(map.find(val)!=map.end())
            return false;
        a.push_back(val);
        map[val]=a.size()-1;
        return true;
        
    }
    
    bool remove(int val) {
        if(map.find(val)==map.end())
            return false;
        int last=a.back();
        a[map[val]]=a.back();
        a.pop_back();
        map[last]=map[val];
        map.erase(val);
        return true;
        
        
    }
    
    int getRandom() {
        return a[rand()%a.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
