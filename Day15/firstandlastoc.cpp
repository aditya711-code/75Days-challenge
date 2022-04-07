class Solution {
public:
    int firstocc(vector<int> &arr, int n, int x)
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}
int lastocc(vector<int> &arr, int n, int x)
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {

            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else if (arr[mid] > x)
            e = mid - 1;
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=firstocc(nums,n,target);
        int last=lastocc(nums,n,target);
        vector<int>ans;
        ans.push_back(first);
         ans.push_back(last);
        return ans;
        
    }
};
