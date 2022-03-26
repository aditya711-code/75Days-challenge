class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n=nums.size();
        int k;
        for(k=0;k<n;k++)
        {
            if(nums[k]>=0)
                break;
        }
        int i=k-1;
        int j=k;
        int index=-1;
       // vector<int>temp(n,0);
        while(i>=0 && j<n)
        {
            if(nums[i]*nums[i]<nums[j]*nums[j])
            {
                nums[index+1]=nums[i]*nums[i];
                i--;
            }
            else
            {
                nums[index+1]=nums[j]*nums[j];
                j++;
            }
            index++;
        }
             while (i >= 0)
             {
                nums[index+1] = nums[i]*nums[i];
                i--;
                index++;
            }
 
    /* Copy the remaining elements of second half */
    while (j < n) {
        nums[index+1] = nums[j]*nums[j];
        j++;
        index++;
    }
       
        return nums;
    }
};
