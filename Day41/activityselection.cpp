 static bool comp(pair<int,int>&a,pair<int,int>&b)
    {
        return a.second<b.second;
    }
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
       vector<pair<int,int>>work;
       for(int i=0;i<n;i++)
       {
           work.push_back({start[i],end[i]});
       }
       sort(work.begin(),work.end(),comp);
       int ans=0;
       int workat=0;
       for(int i=0;i<n;i++)
       {
           if(workat<work[i].first)
           {
               ans++;
               workat=work[i].second;
           }
       }
       return ans;
        
    }
