class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        int itr=1;
        while(itr<k)
        {
             itr++;
            pq.pop();
           
        }
        int ans=pq.top();
        return ans;
    }
};
