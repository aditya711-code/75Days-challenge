 vector<int> nextGreaterElements(vector<int>& nums2) {
        
        
        int n=nums2.size();
        nums2.resize(2*n);
        
        stack<int>st;
        vector<int>res(n,-1);
        for(int i=0;i<2*n-1;i++)
        {
            while(!st.empty() && nums2[st.top()]<nums2[i%n])
            {
                res[st.top()]=nums2[i%n];
                st.pop();
            }
            st.push(i%n);
        }
        return res;
    }
