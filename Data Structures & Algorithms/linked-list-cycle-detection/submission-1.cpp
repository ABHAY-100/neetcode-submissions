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
    bool hasCycle(ListNode* head) {
        if (!head || !head->next) {
            return false;
        }

        ListNode *curr = head;
        set<ListNode*> seen;

        while (curr->next != NULL) {
            if (seen.count(curr)) {
                return true;
            }
            seen.insert(curr);
            curr = curr->next;
        }

        return false;
    }
};
