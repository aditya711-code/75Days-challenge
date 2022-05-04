class Solution {
public:
   bool static compare(pair<int, int> p1, pair<int, int> p2)
{
    // if frequencies of two elements are same
    // then the larger number should come first
    
  
    // sort on the basis of decreasing order
    // of frequencies
    return p1.second > p2.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
       int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto itr:m){
            pq.push(make_pair(itr.second,itr.first));
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
