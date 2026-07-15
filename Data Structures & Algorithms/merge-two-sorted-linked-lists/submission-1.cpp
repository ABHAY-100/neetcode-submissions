class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;
        ListNode* list3 = &dummy;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val < list2->val) {
                list3->next = list1;
                list1 = list1->next;
            } else {
                list3->next = list2;
                list2 = list2->next;
            }
            list3 = list3->next;
        }

        list3->next = list1 ? list1 : list2;

        return dummy.next;
    }
};
