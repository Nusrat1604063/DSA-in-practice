//
// Created by Tabassum Akter Nusrat on 15/8/25.
//
//brute force (m*n) solution
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {

        while(A != nullptr) {
            ListNode *head = B;
            while(head != nullptr) {
                if(A == head) {
                    return A;
                }

                head = head ->next;

            }

            A = A->next;

        }
        return NULL
        ;

    }
};

//better solution 0(n) T.C but taken O(n) memory
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        map<ListNode*, bool> mp;
        while (A != nullptr) {
            mp[A] = true;
            A = A->next;
        }
        while(B != nullptr) {
            if(mp.count(B)) {
                return B;
            }
            B = B->next;
        }
        return NULL;

    }
};

//Most optimal O(n) and O(1)

class Solution {
public:

    int length (ListNode * head) {
        int count = 0;
        while(head != NULL) {
            count++;
            head = head->next;
        }
        return count;
    }

    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        int a = length(A);
        int b = length(B);

        int d = abs(a-b);
        if(b > a) {
            swap(A,B);
        }
        while(d!= 0){
            A = A->next;
            d--;
        }
        while(A != NULL && B!= NULL) {
            if( A == B) {
                return A;
            }
            A = A->next;
            B = B->next;
        }
        return NULL;

    }
};