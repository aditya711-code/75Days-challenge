ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
     ListNode* dummy=new ListNode();
        ListNode* p1=dummy;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<l2->val)
            {
                p1->next=l1;
                l1=l1->next;
                
            }
            else
            {
                p1->next=l2;
                l2=l2->next;
               
            }
             p1=p1->next;
        }
        while(l1!=NULL)
        {
            p1->next=l1;
            l1=l1->next;
            p1=p1->next;
        }
         while(l2!=NULL)
        {
            p1->next=l2;
            l2=l2->next;
            p1=p1->next;
        }
        return dummy->next;
    }
