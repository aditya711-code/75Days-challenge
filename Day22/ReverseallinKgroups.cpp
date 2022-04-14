 ListNode* reverse(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* n=reverse(head->next);
        ListNode* tail=head->next;
        tail->next=head;
        head->next=NULL;
        return n;
    }
    int count(ListNode* head)
    {
        ListNode* temp=head;
        int length=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            length++;
        }
        return length;
    }
    typedef ListNode Node;
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1)
            return head;
        int size=count(head);
        Node* dummy=new Node(0);
        dummy->next=head;
        Node* pre=dummy;
        Node* cur=pre;
        Node* nex=pre;
       
        while(size>=k)
        {
            cur=pre->next;
            nex=cur->next;
            for(int i=1;i<k;i++)
            {
                cur->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=cur->next;
            }
            pre=cur;
            size-=k;
        }
        return dummy->next;
       
    }
