class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>>pq;
        ListNode* head;
        for(int i=0;i<lists.size();i++)
        {
            head=lists[i];
            while(head!=NULL)
            {
                pq.push(head->val);
                head=head->next;
            }
        }
        ListNode* head1=NULL;
        ListNode* tail=NULL;
        while(!pq.empty())
        {
            if(head1==NULL)
            {
                head1=new ListNode(pq.top());
                pq.pop();
                tail=head1;
                
            }
            else
            {
                tail->next=new ListNode(pq.top());
                pq.pop();
                tail=tail->next;
            }
        }
        return head1;
        
    }
};
