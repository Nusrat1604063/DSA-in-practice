//
// Created by Tabassum Akter Nusrat on 16/8/25.
//

/*
 *4 → 5 → 1 → 9
*Copy value of 5->next (1) into 5.
Now list looks like:
4 → 1 → 1 → 9
4 → 1 → 9
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};