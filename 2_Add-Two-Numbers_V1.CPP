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
        int sum = 0;
        int carryOver = 0;
        ListNode* returnIndex = new ListNode();
        ListNode* returnList = returnIndex;
        ListNode* start1 = l1;
        ListNode* start2 = l2;

        while(start1 != nullptr || start2 != nullptr || carryOver!= 0)
        {
            //cout << start1->val << endl;
            //cout << start2->val << endl;

            if(start1 != nullptr && start2 != nullptr)
            {
                sum = start1->val + start2->val + carryOver;
            }
            else if (start1 == nullptr && start2 != nullptr)
            {
                sum = 0 + start2->val + carryOver;
            }
            else if (start1 != nullptr && start2 == nullptr)
            {
                sum = start1->val + 0 + carryOver;
            }
            else if (carryOver != 0)
            {
                sum = carryOver;
            }
            
            carryOver = sum / 10;
            
            start1 = (start1==nullptr) ? nullptr : start1->next;
            start2 = (start2==nullptr) ? nullptr : start2->next;
            
            returnIndex->val = sum % 10;
            
            if(start1 != nullptr || start2 != nullptr || carryOver != 0)
            {
                returnIndex->next = new ListNode();
                returnIndex = returnIndex->next;
            }
        }

        return returnList;
    }
};
