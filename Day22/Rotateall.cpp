 int count(ListNode* head)
    {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* temp=head;
        int len=1;
        while(temp->next!=NULL)
        {
            len++;
            temp=temp->next;
        }
        
        temp->next=head;
        k=k%len;
        int end=len-k;
        while(end--)
        {
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
        
    }
