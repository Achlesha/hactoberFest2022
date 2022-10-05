class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode *cur,*prev,*next;
        prev=NULL;
    if(head==NULL)
        return head;
    cur=head;
    next=cur->next;
    cur->next=NULL;
    while(next!=NULL)
    {
        prev=cur;
        cur=next;
        next=cur->next;
        cur->next=prev;
    }
    head=cur;
    cur->next=prev;
    return head;
    }
};