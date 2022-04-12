 vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> freqMap;
        vector<vector<int>> freq(nums.size() + 1);
        vector<int> ans;
        
        for (auto& it : nums)
            freqMap[it]++;
        
        for (auto& it : freqMap)
            freq[it.second].push_back(it.first);
        
       
        for (int i=nums.size();i>0;i--)
        {
            for (auto& it2 : freq[i])
            {
                if (k == 0)
                    return ans;

                ans.push_back(it2);
                k--;
            }
        }

        return ans;
    }
