class MyHashMap {
public:
    vector<int> v;

    int x=10000001;
    MyHashMap() {
        //in a class we can intialize an vector in  constructor
        v = vector<int>(x, -1);
      
    }
    
    void put(int key, int value) {
        v[key]=value;
    }
    
    int get(int key) {
        return v[key];
        
    }
    
    void remove(int key) {
        v[key]=-1;
        
    }
};
