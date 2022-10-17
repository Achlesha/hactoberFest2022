//Merge k Sorted Lists
//Hard
//Question no. 23
//https://leetcode.com/problems/merge-k-sorted-lists/description/

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if(lists.empty()) return nullptr;
        ListNode* dummy = new ListNode(0);
        ListNode* cp = dummy;
        int cur = INT_MAX, index = 0;
        while(1) {
            cur = INT_MAX;
            for(int i=0;i<lists.size();++i) {
                if(lists[i] != NULL && lists[i]->val<cur) {
                    cur = lists[i]->val;
                    cp->next = lists[i];
                    index = i;
                }
            }
            if(cur == INT_MAX) break;
            lists[index] = lists[index]->next;
            cp = cp->next;
        }
        
        return dummy->next;

    }
};
