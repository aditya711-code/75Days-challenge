 int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        long hmax=horizontalCuts[0];
        int hcuts=horizontalCuts.size();
        for(int i=1;i<horizontalCuts.size();i++){
            if(horizontalCuts[i]-horizontalCuts[i-1]>hmax)
            {
                hmax=horizontalCuts[i]-horizontalCuts[i-1];
            }
        }
        if(h-horizontalCuts[hcuts-1]>hmax)
        {
            hmax=h-horizontalCuts[hcuts-1];
        }
        sort(verticalCuts.begin(),verticalCuts.end());
         int vcuts=verticalCuts.size();
        long vmax=verticalCuts[0];
        for(int i=1;i<vcuts;i++){
            if(verticalCuts[i]-verticalCuts[i-1]>vmax)
            {
                vmax=verticalCuts[i]-verticalCuts[i-1];
            }
        }
        if(w-verticalCuts[vcuts-1]>vmax)
        {
            vmax=w-verticalCuts[vcuts-1];
        }
        long res=(hmax*vmax)%1000000007;
        return (int)res;
        
    }
