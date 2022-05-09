class Solution {
public:
    vector<string> helper(int n)
    {
        if(n==1)
        {
            vector<string>res={"0","1"};
            return res;
            
        }
        vector<string>bitcode=helper(n-1);
        vector<string>ans;
        for(int i=0;i<bitcode.size();i++)
        {
            string str=bitcode[i];
            ans.push_back("0"+str);
        }
        for(int j=bitcode.size()-1;j>=0;j--)
        {
            string str=bitcode[j];
            ans.push_back("1"+str);
        }
        return ans;
        
    }
    vector<int> grayCode(int n) {
        vector<string>bitcode=helper(n);
        vector<int>ans;
        for(int i=0;i<bitcode.size();i++)
        {
            ans.push_back(stoi(bitcode[i],0,2));//stoi function used to convert binary string to number
        }
        return ans;
    }
};
