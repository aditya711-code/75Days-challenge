class Solution {
public:
    int pivoteleinarr(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] >= nums[0])
        {
            s = mid + 1;
        }
        else
            e = mid;
    }
    return s;
}
int binarysearch(vector<int> &nums, int s, int e, int target)
{
    int start = s;
    int end = e;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return -1;
}
int search(vector<int> &arr, int target)
{
  int s=0;
    int e=arr.size()-1;
    
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==target)
            return mid;
        else if(arr[s]<=arr[mid])
        {
            if(target>=arr[s] && target<=arr[mid])
            {
                e=mid-1;
            }
            else
                s=mid+1;
        }
        else 
        {
            if(target>=arr[mid] && target<=arr[e])
            {
                s=mid+1;
            }
            else
                e=mid-1;
            
        }
    }
    return -1;
    
}

};
