/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
//brute force
class Solution {
public:
    Node* copyRandomList(Node* head) {
     
        unordered_map<Node*,Node*>map;
        Node* temp=head;
        while(temp!=NULL)
        {
            map[temp]=new Node(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            map[temp]->next=map[temp->next];
            map[temp]->random=map[temp->random];
            temp=temp->next;
            
        }
       return map[head];
        
    }
};
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* itr=head;
        Node* front=head;
        //a duplicate ll is formed withing the original ll//ll is linked list
        while(itr!=NULL)
        {
            front=itr->next;
            Node* copy=new Node(itr->val);
            itr->next=copy;
            copy->next=front;
            itr=front;
        }
        //now we need to copy the random pointer from the original ll to copiedll
        itr=head;
        while(itr!=NULL)
        {
            if(itr->random!=NULL)
            {
                itr->next->random=itr->random->next;
            }
            itr=itr->next->next;
        }
        Node* dummy=new Node(0);
        Node* copy=dummy;
        //Now separate the copied linked list from the original linked list and retur it
        itr=head;
        while(itr!=NULL)
        {
            front=itr->next->next;
            copy->next=itr->next;
           itr->next=front;
            copy=copy->next;
            itr=itr->next;
        }
        return dummy->next;
        
    }
};
