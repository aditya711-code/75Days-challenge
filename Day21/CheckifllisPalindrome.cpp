class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* n=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return n;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* head1=reverse(slow->next);
        while(head1!=NULL)
        {
            if(head1->val !=head->val)
            {
                return false;
            }
            head=head->next;
            head1=head1->next;
        }
        return true;
    }
};
