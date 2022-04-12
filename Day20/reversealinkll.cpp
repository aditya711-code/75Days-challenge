//iterative with three pointers approach
 ListNode* reverseList(ListNode* head) {
        if(head==NULL|| head->next==NULL)
            return head;
            ListNode* curptr=head;
            ListNode* prevptr=NULL;
            ListNode* nextptr=NULL;
            while(curptr!=NULL)
            {
                nextptr=curptr->next;
                curptr->next=prevptr;
                prevptr=curptr;
                curptr=prevptr;
                cout<<curptr->val<<" ";
            }
            return prevptr;
    }
//Recursively
ListNode* reverseList(ListNode* head) {
        if(head==NULL|| head->next==NULL)
            return head;
        ListNode* temp=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return temp;
    }
