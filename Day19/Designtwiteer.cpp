class Twitter {
public:
     unordered_map<int, unordered_set<int>> followed; 
    unordered_map<int, int> tweetedBy;
    list<int> tweet; 
    Twitter() {
        
    }
    
    void postTweet(int uid, int tid) {
        tweetedBy[tid] = uid;
        tweet.push_front(tid);
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> answer;
        
        for(auto it:tweet)
        {
            int uid = tweetedBy[it];
            if(uid == userId || followed[userId].find(uid) != followed[userId].end())
            {
                answer.push_back(it);
                if(answer.size() == 10) return answer;
            }
        }
        return answer;
    }
    
    void follow(int id1, int id2) {
        followed[id1].insert(id2);
    }
    
    void unfollow(int id1, int id2) {
        followed[id1].erase(id2);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
