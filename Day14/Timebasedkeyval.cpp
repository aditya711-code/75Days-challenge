class TimeMap {
public:
    unordered_map<string,vector<pair<string,int>>>map;
    string getans(vector<pair<string,int>>&map,int timestamp)
    {
          string ans = "";
         int end = map.size()-1;
        int s = 0;
        
        while (s <=end)
        {
            int mid = s + (end - s) / 2;
            if (map[mid].second == timestamp)
            {
                ans = map[mid].first;
                return ans;
               
            }
            else if (map[mid].second < timestamp)
            {
                 
               
                s = mid + 1;
            }
            else
            {
                 
                end = mid - 1;
            }
        }
     //this is the key..
        
     return end >= 0 ? map[end].first : "";
        
    }
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
       map[key].push_back({value,timestamp});
        
    }
    
    string get(string key, int timestamp) {
        if(map.find(key)==map.end())
            return "";
        return getans(map[key],timestamp);
      
       
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
