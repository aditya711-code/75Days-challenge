class MyStack {
public:
    queue<int>q;
    int N;
    MyStack() {
        N=0;
    }
    
    void push(int x) {
        q.push(x);
        N++;
        for(int i=0;i<q.size()-1;i++)
        {
            q.push(q.front());
            q.pop();
        }
        
    }
    
    int pop() {
        if(q.empty())
            return -1;
        int ans= q.front();
        q.pop();
        N--;
        return ans;
        
    }
    
    int top() {
        if(q.empty())
            return -1;
        int ans=q.front();
        return ans;
        
    }
    
    bool empty() {
        if(N==0||N<0)return true;
        return false;
        
    }
};
