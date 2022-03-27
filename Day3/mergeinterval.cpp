 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1)
            return intervals;
        sort(intervals.begin(),intervals.end());
       int j=0;
        
        vector<vector<int>>ans;
        ans.push_back(intervals[j]);
        for(int i=1;i<intervals.size();i++)
        {
           
            if(ans[j][1]>=intervals[i][0] )
            {
                ans[j][1]=max(ans[j][1],intervals[i][1]);
                
            }
            else
            {
                ans.push_back(intervals[i]);
                j++;
                
            }
           
        }
        return ans;
        
    }
