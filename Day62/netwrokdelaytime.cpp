class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
         vector<pair<int,int>>adj[101];
        for(int i=0;i<times.size();i++)
        {
            int src=times[i][0];
            int dest=times[i][1];
            int w=times[i][2];
            adj[src].push_back({dest,w});
        }
        typedef pair<int,int>pi;
        priority_queue< pi,vector<pi>,greater<pi>>pq;
        pq.push({k,0});
        vector<int>dist(n+1,INT_MAX);
        dist[k]=0;
       
    
        while(!pq.empty())
        {
            int minvertex=pq.top().first;
            int curtime=pq.top().second;
            pq.pop();
            if(curtime>dist[minvertex])
                continue;
            for(pair<int,int>edge:adj[minvertex])
            {
                int time=edge.second;
                int u=edge.first;
                if(dist[u]>curtime+time)
                {
                    dist[u]=curtime+time;
                    pq.push({u,dist[u]});
                }
            }
        }
        int ans=INT_MIN;
        for(int i=1;i<=n;i++)
        {
            ans=max(ans,dist[i]);
        }
        return ans==INT_MAX?-1:ans;
        
    }
    
};
