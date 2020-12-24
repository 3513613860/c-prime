/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(headA==NULL || headB==NULL)
    {
        return NULL;
    } 
    Node * pA = headA;
    Node * pB = headB;
    while(pA != pB)
    {
        pA = pA ==NULL ? headB : pA->next;
        pB = pB ==NULL ? headA : pB->next;
    }
    return pA;
}