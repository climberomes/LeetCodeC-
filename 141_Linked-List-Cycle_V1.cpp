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
    bool hasCycle(ListNode *head) {
        if(head == nullptr){return false;}
        unordered_map<ListNode *,int> myLookup;        //(Value, Position) Pair
        int i = 0;
        while(head->next != nullptr)
        {
            if(myLookup.find(head) == myLookup.end())
            {
                myLookup[head] = i++;
                head = head->next;
            }
            else
            {
                return true;
            }
                
        }

        return false;
    }
};
