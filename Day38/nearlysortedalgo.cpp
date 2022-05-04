//in that article problem was something else
//drive the car
long long required(long long arr[], long long n, long long k) {
        // Your code goes here
        long long ans=1;
        for(long long i=0;i<n;i++)
        {
            long long  diff=k-arr[i];
           
            if(diff<0)
            {
               
                ans=min(ans,diff);
            }
        }
        return ans*-1;
    }
//THr real problem of nearly sorted or K sorted array
/*Input : arr[] = {6, 5, 3, 2, 8, 10, 9}
            k = 3 
Output : arr[] = {2, 3, 5, 6, 8, 9, 10}
*/
vector<int>sortedArray(vector<int>&nums,int k)
{
        int n=nums.size();
        int size;
        size=(n==k)?k:k+1;
        priority_queue<int,vector<int>,greater<int>>pqmin(nums.begin(),nums.begin()+size);
        int index=0;
        vector<int>output(n,0);
        for(int i=k+1;i<n;i++)
        {
                output[index]=pqmin.top();
                pqmin.pop();
                pq.push(nums[i]);
                index++;
        }
        while(!pqmin.empty())
        {
                output[index]=pqmin.top();
                pqmin.pop():
                index++;
        }
        return output;
}
