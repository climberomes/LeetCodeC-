/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //will always have value if we pass in new ListNode();
    int sum = l1->val + l2->val; 
    
    if(l1->next == nullptr && l2->next == nullptr)
    {
        return (sum>=10) ? new ListNode(sum%10,new ListNode(1)) : new ListNode(sum);
    }
    else if(l1->next == nullptr)
    {
        return new ListNode(sum%10, addTwoNumbers(new ListNode(sum / 10), l2->next));
    }
    else if(l2->next == nullptr)
    {
        return new ListNode(sum%10, addTwoNumbers(l1->next, new ListNode(sum / 10)));
    }
    else
    {
        l1->next->val = l1->next->val + sum / 10;
        return new ListNode(sum%10, addTwoNumbers(l1->next, l2->next));
    }
}
};
