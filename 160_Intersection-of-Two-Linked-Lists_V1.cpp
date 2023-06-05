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
        unordered_map<ListNode*,int> myMap;

        while(headA != nullptr || headB != nullptr)
        {
            if(headA != nullptr)
            {
                if(myMap.find(headA) == myMap.end())
                {
                    myMap[headA]++;
                    headA = headA->next;
                }
                else
                {
                    return headA;
                }
            }

            if(headB != nullptr)
            {
                if(myMap.find(headB) == myMap.end())
                {
                    myMap[headB]++;
                    headB = headB->next;
                }
                else
                {
                    return headB;
                }
            }
        }

        return nullptr;
    }
};
