vector<int> minPartition(int n)
    {
        // code here
        vector<int>v={2000,500,200,100,50,20,10,5,2,1};
        int size=v.size();
        vector<int>n_coins;
        for(int i=0;i<size;i++)
        {
           while(n>=v[i]){
               n=n-v[i];
               n_coins.push_back(v[i]);
           }
        }
        
        return n_coins;
    }
