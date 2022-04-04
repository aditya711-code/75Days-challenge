 vector<int> partitionLabels(string s) {
        vector<int>last_idx(26,0);
        for(int i=0;i<s.size();i++ )
        {
            last_idx[s[i]-'a']=i;
            
        }
        vector<int>ans;
        int i=0;
        int j=0,start=0;
        int n=s.size();
        while(i<n)
        {
            j=max(j,last_idx[s[i]-'a']);
            if(i==j)
            {
                ans.push_back(i-start+1);
                start=i+1;
            }
            i++;
        }
        return ans;
        
    }
