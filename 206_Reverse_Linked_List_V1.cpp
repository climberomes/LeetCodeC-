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
    ListNode* reverseList(ListNode* head) {
        ListNode* myNext = nullptr;
        ListNode* myPrevious = nullptr;

        //myHead will eventually point to a nullptr
        while(head)
        {
            myNext = head->next;      //So we dont lose the original list (forward)
            head->next = myPrevious;  //this is the actual reversal
            myPrevious = head;        //so we dont lose the original list (backward)
            head = myNext;            //so our head can open the door to the next value
        }

        return myPrevious;
        
    }
};
