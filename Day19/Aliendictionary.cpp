  unordered_map<char,int>map;
  
    bool isAlienSorted(vector<string>& words, string order) {
        
        for(int i=0;i<order.size();i++)
        {
            map[order[i]]=i;
        }
        bool ans=false;
        for(int i=0;i<words.size()-1;i++)
        {
            string s=words[i];
            string s1=words[i+1];
            for(int j=0;j<s.size(); j++)
            {
                if(map[s[j]]!=map[s1[j]])
                {
                    if(map[s[j]]<map[s1[j]])
                        return true;
                }
            }
            if(s.size()<=s1.size())
                return true;
        }
        return false;
        
    }
