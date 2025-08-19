//
// Created by Tabassum Akter Nusrat on 16/8/25.
//
//optimal approach

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *one = head;
        ListNode *two = head;

        while(n--) {
            two = two ->next;
        }
        if(two == nullptr) {
            return one->next;   //when  n==k mane first node remove korte hbe
        }

        while(two->next != nullptr) {

            one = one->next;
            two = two->next;
        }

        one->next = one->next->next;
        return head;
    }
};