 int maxScore(vector<int>& cardPoints, int k) {
        int score=0;
        int n=cardPoints.size();
          
        int  window_sum=0;
        for(int i=0;i<k;i++)
        {
            window_sum+=cardPoints[i];
        }
        int ans=window_sum;
        for(int i=k-1,j=n-1;i>=0;i--,j-- )
        {
            window_sum+=cardPoints[j]-cardPoints[i];
           // cout<<window_sum<<" ";
            ans=max(ans,window_sum);
            
        }
        return ans;
    }
