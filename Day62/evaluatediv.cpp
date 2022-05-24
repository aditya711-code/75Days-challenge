class Solution {
public:
    void dfs(string s,string d,unordered_set<string>v,unordered_map<string,vector<pair<string,double>>>&m,double&ans,double temp)
    {
        if(v.find(s)!=v.end())return;
        else
        {
            v.insert(s);
            if(s==d)
            {
                ans=temp;
                return;
            }
            else
            {
                for(auto a:m[s])
                {
                    dfs(a.first,d,v,m,ans,temp*a.second);
                }
                    
            }
        }
        
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string,vector<pair<string,double>>>map;
        for(int i=0;i<equations.size();i++){
            map[equations[i][0]].push_back({equations[i][1],values[i]});
             map[equations[i][1]].push_back({equations[i][0],1/values[i]});
        }
        vector<double>res;
        for(int i=0;i<queries.size();i++)
        {
            string src=queries[i][0];
            string dest=queries[i][1];
            double ans=-1.0;
            unordered_set<string>visited;
            if(map.find(src)!=map.end())
            dfs(src,dest,visited,map,ans,1.0);
            res.push_back(ans);
            
        }
        return res;
    }
};
