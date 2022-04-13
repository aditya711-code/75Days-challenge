/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL){
            return NULL;
        }
         ListNode* a=headA;
        ListNode* b=headB;
        //Brute force using map
        // unordered_map<ListNode* ,ListNode*>map;
       
        // while(a!=NULL)
        // {
        //     map[a]=a;
        //     a=a->next;
        // }
        // while(b!=NULL)
        // {
        //     if(map[b])
        //     {
        //         return b;
        //     }
        //     b=b->next;
        // }
        while(a!=b)
        {
            a=a==NULL?headB:a->next;
            b=b==NULL?headA:b->next;
        }
        return a;
    }
};
