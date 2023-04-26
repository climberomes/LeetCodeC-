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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* myHead = new ListNode();
        ListNode* myTail = myHead;
        
        while (list1 != nullptr || list2 != nullptr)
        {
            if(list1 == nullptr)
            {
                myTail->next = list2;
                return myHead->next;
            }
            else if(list2 == nullptr)
            {
                myTail->next = list1;
                return myHead->next;
            }
            else if(list1->val <= list2->val)
            {
                myTail->next = list1;
                list1=list1->next;
            }
            else //list2->val <= list1->val
            {
                myTail->next = list2;
                list2=list2->next;
            }
            
            myTail = myTail->next;
        }

        return myHead->next;
    }
};
