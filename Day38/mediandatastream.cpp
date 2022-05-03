class MedianFinder {
public:
    priority_queue<int>pqmax;
    priority_queue<int,vector<int>,greater<int>>pqmin;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
      if(pqmax.empty() && pqmin.empty())
      {
          pqmax.push(num);
      }
      else if(num<pqmax.top())
      {
          pqmax.push(num);
      }
      else
      {
          pqmin.push(num);
      }
    if (pqmax.size() > pqmin.size() + 1) {
			pqmin.push(pqmax.top());
			pqmax.pop();
		}
    else if (pqmin.size() > pqmax.size() + 1) {
			pqmax.push(pqmin.top());
			pqmin.pop();
		}
    
        
    }
    
    double findMedian() {
        int lsize=pqmax.size();
        int rsize=pqmin.size();
       
       
        if(lsize==rsize)
        {
            double mid=(pqmax.top()+pqmin.top())/2.0;
            return mid;
        }
        else if(lsize>rsize)
        {
            double mid=pqmax.top();
            return mid;
        }
        else {
            double mid=pqmin.top();
            return mid;
        }
       
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
