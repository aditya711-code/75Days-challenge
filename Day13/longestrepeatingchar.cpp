 int characterReplacement(string s, int k) {
        unordered_map<char,int>map;
        int si=0;
        int maxc=0;
        int length=0;
        for(int i=0;i<s.size();i++)
        {
            maxc=max(maxc,++map[s[i]]);
            while(i-si+1-maxc>k)
            {
                map[s[si]]--;
                si++;
            }
            length=max(length,i-si+1);
        }
        return length;
    }
