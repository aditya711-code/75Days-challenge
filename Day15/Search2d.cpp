bool binarysearch(vector<int>&ans,int s,int e,int target)
    {
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(ans[mid]==target)
                return true;
            else if(ans[mid]<target){
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();

        int n=matrix[0].size();
       if(m==0 || n==0)return false;
        int row, l = 0, r = m - 1, mid;
        while (l < r) {
            mid = (l + r) / 2;
            // moving l up if needed
            if (matrix[mid].back() < target) l = mid + 1;
            // moving r down if needed
            else if (matrix[mid][0] > target) r = mid - 1;
            // we found our row!
            else {
                l = mid;
                break;
            };
        }
        row=l;
        vector<int>v(matrix[row].begin(),matrix[row].end());
        
        return binarysearch(v,0,n-1,target);
        
    }
