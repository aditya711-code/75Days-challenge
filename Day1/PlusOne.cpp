//My approach
 vector<int> plusOne(vector<int>& digits) {
        
        vector<int>dig;
         int carry=0;
        int last_idx=digits.size()-1;
        if(digits[last_idx]==9)
        {
            if(last_idx==0)
            {
                dig.push_back(1);
                dig.push_back(0);
                return dig;
            }
             dig.push_back(0);
            carry=1;
            for(int i=last_idx-1;i>=0;i--)
            {
                if(digits[i]==9 && carry==1)
                {
                    dig.push_back(0);
                    carry=1;
                }
                else
                {
                    dig.push_back(digits[i]+carry);
                    carry=0;
                }
            }
            if(carry==1)
            {
                dig.push_back(1);
            }
        }
        else
            {
                int num=digits[last_idx]+1;
                dig.push_back(num);
                for(int i=last_idx-1;i>=0;i--)
                {
                    dig.push_back(digits[i]);
                }
            }
        
        reverse(dig.begin(),dig.end());
        return dig;
    }
