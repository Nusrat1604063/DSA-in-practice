//
// Created by Tabassum Akter Nusrat on 14/8/25.
//
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fPtr = head;
        ListNode *sPtr = head;

        while(fPtr != nullptr && fPtr->next != nullptr) {
            sPtr = sPtr->next;
            fPtr = fPtr->next->next;

        }

        return sPtr;
    }
};