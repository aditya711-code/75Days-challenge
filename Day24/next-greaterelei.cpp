vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums2.size();
        stack<int>st;
        vector<int>v;
        for(int i=n1-1;i>=0;i--)
        {
            if(st.empty())
            {
                v.push_back(-1);
            }
            else if(st.size()>0 && st.top()>nums2[i])
            {
                v.push_back(st.top());
            }
            else if(st.size()>0 && st.top()<=nums2[i])
            {
                while(st.size()>0 && st.top()<=nums2[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(st.top());
                }
            }
            st.push(nums2[i]);
        }
        reverse(v.begin(),v.end());
        
        vector<int>v1;
        int n2=nums1.size();
        for(int i=0;i<n2;i++)
        {
            auto it=find(nums2.begin(),nums2.end(),nums1[i]);
            if(it!=nums2.end())
            {
                int index=it-nums2.begin();
                v1.push_back(v[index]);
            }
        }
        return v1;
        
    }
