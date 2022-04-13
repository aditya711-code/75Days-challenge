class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* n=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return n;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1==NULL && l2==NULL)
            return NULL;
        ListNode* temp1=reverse(l1);
        ListNode* temp2=reverse(l2);
        ListNode* dummy=new ListNode();
        ListNode* h1=dummy;
        int sum=0;
        int carry=0;
        while(temp1!=NULL ||  temp2!=NULL || carry==1 )
        {
            sum=0;
            if(temp1)
            {
                sum+=temp1->val;
                temp1=temp1->next;
            }
            if(temp2)
            {
                sum+=temp2->val;
                temp2=temp2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* n=new ListNode(sum%10);
            h1->next=n;
            h1=h1->next;
            
            
        }
        ListNode* head=reverse(dummy->next);
        return head;
    }
};
